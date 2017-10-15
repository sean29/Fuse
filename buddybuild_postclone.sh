OUTPUT2="$(uname -a)"
curl -X POST --data-urlencode "payload={\"channel\": \"#buddybuild-android\", \"username\": \"webhookbot\", \"text\": \"uname: ${OUTPUT2}\", \"icon_emoji\": \":ghost:\"}" https://hooks.slack.com/services/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



curl --remote-name http://dl.google.com/android/repository/android-ndk-r15c-darwin-x86_64.zip
unzip android-ndk-r15c-darwin-x86_64.zip | grep -v inflating: | grep -v creating: | grep -v extracting:
rm android-ndk-r15c-darwin-x86_64.zip
mkdir -p "/Users/buddybuild/Library/Android/sdk/"
rm -rf /Users/buddybuild/Library/Android/sdk/ndk-bundle
mv android-ndk-r15c "/Users/buddybuild/Library/Android/sdk/ndk-bundle"
echo "Installed NDK to /Users/buddybuild/Library/Android/sdk/ndk-bundle"


curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target / || true

OUTPUT="$(fuse --version)"

curl -X POST --data-urlencode "payload={\"channel\": \"#buddybuild-android\", \"username\": \"webhookbot\", \"text\": \"fuse --version: ${OUTPUT} \", \"icon_emoji\": \":ghost:\"}" https://hooks.slack.com/services/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


echo "android 10"
APP_VERSION=0.0.4


sed -i -e "s/pk_test/${STRIPE_PRIVATE_KEY}/g" MainView.js
sed -i -e "s/slack_key/${SLACK_KEY_VAR}/g" MainView.js
sed -i -e "s/BUDDYBUILD_BUILD_NUMBER/${BUDDYBUILD_BUILD_NUMBER}/g" MainView.js
sed -i -e "s/FacebookAppIDREPLACE/${FB_APP_ID}/g" temp.plist
sed -i -e "s/APP_VERSION/${APP_VERSION}/g" temp.plist
sed -i -e "s/APP_VERSION/${APP_VERSION}/g" MainView.js
sed -i -e "s/POST_SERVER_ITEM_ACCESS_TOKEN/${POST_SERVER_ITEM_ACCESS_TOKEN}/g" MainView.js


npm install -g fusepm
fusepm install

#fuse install android

OUTPUT="$((fuse install android < ./sdkinstall.txt) 2>&1)"


curl -X POST --data-urlencode "payload={\"channel\": \"#buddybuild-android\", \"username\": \"webhookbot\", \"text\": \"fuse install android: ${OUTPUT} \", \"icon_emoji\": \":ghost:\"}" https://hooks.slack.com/services/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


OUTPUT="$((java -version) 2>&1)"
curl -X POST --data-urlencode "payload={\"channel\": \"#buddybuild-android\", \"username\": \"webhookbot\", \"text\": \"java -version  ${OUTPUT}  \", \"icon_emoji\": \":ghost:\"}" https://hooks.slack.com/services/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




OUTPUT="$((uno build -tAndroid --configuration=Release -v) 2>&1)"

curl -X POST --data-urlencode "payload={\"channel\": \"#buddybuild-android\", \"username\": \"webhookbot\", \"text\": \"uno build -tAndroid || true  ${OUTPUT}  \", \"icon_emoji\": \":ghost:\"}" https://hooks.slack.com/services/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


rm -rf emrals.xcodeproj

OUTPUT="$(ls -latr build/Android/Release)"
curl -X POST --data-urlencode "payload={\"channel\": \"#buddybuild-android\", \"username\": \"webhookbot\", \"text\": \" ls -latr build/Android/Release  ${OUTPUT}  \", \"icon_emoji\": \":ghost:\"}" https://hooks.slack.com/services/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

#cp -R build/Android/Release/* .


# this works for iOS, commenting out for now to setup Android
# uname -a
# curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
# echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target /

# APP_VERSION=0.0.4


# sed -i -e "s/pk_test/${STRIPE_PRIVATE_KEY}/g" MainView.js
# sed -i -e "s/slack_key/${SLACK_KEY_VAR}/g" MainView.js
# sed -i -e "s/BUDDYBUILD_BUILD_NUMBER/${BUDDYBUILD_BUILD_NUMBER}/g" MainView.js
# sed -i -e "s/FacebookAppIDREPLACE/${FB_APP_ID}/g" temp.plist
# sed -i -e "s/APP_VERSION/${APP_VERSION}/g" temp.plist
# sed -i -e "s/APP_VERSION/${APP_VERSION}/g" MainView.js
# sed -i -e "s/POST_SERVER_ITEM_ACCESS_TOKEN/${POST_SERVER_ITEM_ACCESS_TOKEN}/g" MainView.js


# npm install -g fusepm
# fusepm install

         
# fuse build --target=iOS -DCOCOAPODS --configuration=Release || true
# cp temp.plist build/iOS/Release/emrals/emrals-Info.plist 
# cp Context.mm build/iOS/Release/src/Targets/iOS/Uno-iOS/
