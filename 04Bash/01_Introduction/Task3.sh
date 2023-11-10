#!/bin/bash
# write bash script to download video from youtube


# Check if command is available
if [ -z "$(command -v yt-dlp)" ];then
  sudo apt update && sudo apt install -y yt-dlp
fi

# Check if input was provided
if [ $# -eq 0 ];then
  echo "No video link provided. Usage: ./Task3.sh <Youtube Video Url>"
  exit 1
fi

URL=$1

cd "${HOME}"/Downloads/ || exit 1
yt-dlp "$URL"