#!/usr/bin/env python
import pysftp

srv = pysftp.Connection(host="192.168.1.101", username="root",
password="arduino")

srv.get("../mnt/sda1/datalog.txt")


# Closes the connection
srv.close()
