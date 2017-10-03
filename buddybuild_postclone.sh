curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target /
sed -i -e "s/pk_test/${STRIPE_PRIVATE_KEY}/g" MainView.js
sed -i -e "s/pk_test/${STRIPE_PRIVATE_KEY}/g" build/Android/Release/app/src/main/assets/mainview-cb8c4a65.js
npm install -g fusepm
rm -rf fuse_modules
fusepm install https://github.com/bolav/fuse-cocoapods
fuse build --target=iOS -DCOCOAPODS --configuration=Release || true
