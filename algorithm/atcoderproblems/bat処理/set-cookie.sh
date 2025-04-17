#!/bin/bash
echo '#LWP-Cookies-2.0' > ~/.local/share/online-judge-tools/cookie.jar
echo "Set-Cookie3: REVEL_SESSION=\"$1\"; path=\"/\"; domain=\"atcoder.jp\"; path_spec; secure; HttpOnly; version=0" >> ~/.local/share/online-judge-tools/cookie.jar
