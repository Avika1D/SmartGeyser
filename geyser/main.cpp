int main() {
    homeowner status;

    envsensor environmentsensor;

    waterheater heater;

    status.printstatus();

    environmentsensor.on();

    environmentsensor.monitor();

    heater.heating();

    return 0;
}
