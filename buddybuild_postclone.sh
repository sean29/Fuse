curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target /
sed -i -e "s/pk_test/${STRIPE_PRIVATE_KEY}/g" MainView.js
sed -i -e "s/slack_key/${SLACK_KEY_VAR}/g" MainView.js
sed -i -e "s/FacebookAppID/${FB_APP_ID}/g" temp.plist

npm install -g fusepm
fusepm install

fuse build --target=iOS -DCOCOAPODS --configuration=Release || true
diff temp.plist build/iOS/Release/build/info.plist
diff Context.mm build/iOS/Release/src/Targets/iOS/Uno-iOS/

cp temp.plist build/iOS/Release/build/info.plist
cp Context.mm build/iOS/Release/src/Targets/iOS/Uno-iOS/


