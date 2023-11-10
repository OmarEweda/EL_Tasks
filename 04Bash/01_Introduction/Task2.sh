#!/bin/bash
# write bash script to generate systemd service file simple example


# Check if input was provided
if [ $# -eq 0 ];then
  echo "No input provided. Usage: ./Task2.sh <service_name> <command>"
  exit 1
fi

SERVICE_NAME=$1
COMMAND=$2

# Generate the service file content
read -r -d '' SERVICE_FILE_CONTENT << EOM
[Unit]
Description=$SERVICE_NAME

[Service]
ExecStart=$COMMAND

[Install]
WantedBy=multi-user.target
EOM

# Write the service file content to a file
echo "$SERVICE_FILE_CONTENT" > "/etc/systemd/system/$SERVICE_NAME.service"

echo "Created service file at /etc/systemd/system/$SERVICE_NAME.service"