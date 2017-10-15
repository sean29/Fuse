# Android attempt:
# uname -a | mail sean@emrals.com 
# uname -a

# curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
# echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target / || true

# APP_VERSION=0.0.4

# sed -i -e "s/pk_test/${STRIPE_PRIVATE_KEY}/g" MainView.js
# sed -i -e "s/slack_key/${SLACK_KEY_VAR}/g" MainView.js
# sed -i -e "s/BUDDYBUILD_BUILD_NUMBER/${BUDDYBUILD_BUILD_NUMBER}/g" MainView.js
# sed -i -e "s/APP_VERSION/${APP_VERSION}/g" MainView.js
# sed -i -e "s/POST_SERVER_ITEM_ACCESS_TOKEN/${POST_SERVER_ITEM_ACCESS_TOKEN}/g" MainView.js

# npm install -g fusepm 
# fusepm install

# fuse install android || true
# fuse build --target=Android --configuration=Release || true

# -------

# this works for iOS, commenting out for now to setup Android
uname -a
curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target /

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

         
fuse build --target=iOS -DCOCOAPODS --configuration=Release || true
cp temp.plist build/iOS/Release/emrals/emrals-Info.plist 
cp Context.mm build/iOS/Release/src/Targets/iOS/Uno-iOS/
