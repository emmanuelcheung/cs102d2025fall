#!/bin/bash
set -x
docker run -ti --rm -p 80:80 -v ${PWD}:/home/student/ seancusackcooperunion/cs102e2020fall /bin/bash -c "cd /home/student; exec su student"
set +x
 
