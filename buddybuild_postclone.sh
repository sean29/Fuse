curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target /
sed -i -e "s/pk_test/${STRIPE_PRIVATE_KEY}/g" MainView.js
sed -i -e "s/slack_key/${SLACK_KEY_VAR}/g" MainView.js

npm install -g fusepm
fusepm install

fuse build --target=iOS -DCOCOAPODS --configuration=Release || true


/usr/libexec/PlistBuddy -x -c "Set :FacebookAppID $FB_APP_ID" build/iOS/Release/src/Targets/iOS/Uno-iOS/emrals-Info.plist
/usr/libexec/PlistBuddy -x -c "Set :FacebookDisplayName Emrals" build/iOS/Release/src/Targets/iOS/Uno-iOS/emrals-Info.plist
/usr/libexec/PlistBuddy -x -c "Set :CFBundleURLTypes:0:CFBundleURLSchemes:0 fb$FB_APP_ID" build/iOS/Release/src/Targets/iOS/Uno-iOS/emrals-Info.plist

# copy the Context.mm file that initalizes buddybuild and facebook
cp Context.mm build/Release/iOS/src/Targets/iOS/Uno-iOS/


