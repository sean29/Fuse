curl --remote-name https://fuse-dl.azureedge.net/releaseartifacts/fuse_osx_1_2_1_13974.pkg
echo password | sudo installer -pkg fuse_osx_1_2_1_13974.pkg -target /
fuse build --target=iOS --configuration=Release || true
sed -i -e 's/pk_test/$STRIPE_PRIVATE_KEY/g' MainView.js
