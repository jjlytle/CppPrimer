#!/bin/bash
echo "starting jjlytle/c_the_hard_way docker image container"
echo "use: docker commit <container name> <image name> to save state"
echo "example: docker commit 1e7 jjlytle/c_development:latest"
docker run -it -v "$PWD":/usr/src/code -w /usr/src/code -e DISPLAY=docker.for.mac.host.internal:0 jjlytle/c_development /bin/bash
