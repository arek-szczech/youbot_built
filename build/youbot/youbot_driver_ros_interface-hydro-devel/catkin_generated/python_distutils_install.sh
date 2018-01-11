#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/arek/youbot/src/youbot/youbot_driver_ros_interface-hydro-devel"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/arek/youbot/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/arek/youbot/install/lib/python2.7/dist-packages:/home/arek/youbot/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/arek/youbot/build" \
    "/usr/bin/python" \
    "/home/arek/youbot/src/youbot/youbot_driver_ros_interface-hydro-devel/setup.py" \
    build --build-base "/home/arek/youbot/build/youbot/youbot_driver_ros_interface-hydro-devel" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/arek/youbot/install" --install-scripts="/home/arek/youbot/install/bin"
