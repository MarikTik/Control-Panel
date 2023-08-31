# ABOUT THE PROJECT

The project's purpose is to build wall attached control panel that controls the domain of
other internet connected devices remotely.

# COMPONENTS

nodemcu v3 microprocessor
ILI9341 3.2 inch display
SD card (not used for now)

# USAGE

1. Create a new platfromio project, copy the code directories (data, include, lib, scripts, src, test).

2. Configure platfromio.ini file to fit your needs.

3. Create file .env and move all the variable names from file public.env to .env, initialize them
to fit the constraints (string initialization without ""). After it you can delete public.env file.

4. Pin connections are shown in pinout file