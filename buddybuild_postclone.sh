curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target /
sed -i -e "s/pk_test/${STRIPE_PRIVATE_KEY}/g" MainView.js
sed -i -e "s/slack_key/${SLACK_KEY_VAR}/g" MainView.js
sed -i -e "s/FacebookAppID/${FB_APP_ID}/g" temp.plist


npm install -g fusepm
fusepm install

fuse build --target=iOS -DCOCOAPODS --configuration=Release || true

sed -i -e "s/FacebookAppID/${FB_APP_ID}/g" temp.plist

echo "1"
find *|grep plist
echo "2"
find *|grep Context
echo "2.2"
cat build/iOS/Release/emrals/emrals-Info.plist
echo "3"
cat build/iOS/Release/build/info.plist
echo "4"
cat /usr/local/share/uno/Packages/UnoCore/1.2.2/targets/ios/emrals/emrals-Info.plist
echo "5"

head -n -2 build/iOS/Release/build/info.plist > temp2.plist
cp temp2.plist build/iOS/Release/build/info.plist
cat temp.plist >> build/iOS/Release/build/info.plist
echo "6"
cat build/iOS/Release/build/info.plist


#/usr/libexec/PlistBuddy -c "clear dict" -c "add :CFBundleURLTypes array" -c "add :CFBundleURLTypes:0 dict" -c "add :CFBundleURLTypes:0:CFBundleURLName string 'urlname-1'" -c "add :CFBundleURLTypes:0:CFBundleURLSchemes array" -c "add :CFBundleURLTypes:0:CFBundleURLSchemes:0 string urlscheme-1"  Info.plist

# /usr/libexec/PlistBuddy -x -c "Set :FacebookAppID $FB_APP_ID" build/iOS/Release/emrals/emrals-Info.plist
# /usr/libexec/PlistBuddy -x -c "Set :FacebookDisplayName Emrals" build/iOS/Release/emrals/emrals-Info.plist
# /usr/libexec/PlistBuddy -x -c "Set :CFBundleURLTypes:0:CFBundleURLSchemes:0 fb$FB_APP_ID" build/iOS/Release/emrals/emrals-Info.plist

# copy the Context.mm file that initalizes buddybuild and facebook
cp Context.mm build/iOS/Release/build/Targets/iOS/Uno-iOS/


