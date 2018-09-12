void loop() {
    if (Serial.avaliable()>0){
        Request = Serial.read();
        
    }
    switch(Mode)
    switch(Request){
        case '01':
            MonitorStatus()
            break;
        case '02':
            FreezeDTC()
            break;
        case '03':
            FuelSystemStatus()
            break;
        case '04':
            EngineLoad()
            break;
        case '05':
            EngineCoolantTemprature()
            break;
        case '06':
            ShortTermFuelTrimBank1()
            break;
        case '07':
            LongTermFuelTrimBank1()
            break;
        case '08':
            ShortTermFuelTrimBank2()
            break;
        case '09':
            LongTermFuelTrimBank2()
            break;
        case '0A':
            FuelPressure()
            break;
        case '0B':
            IntakeManifoldAbsolutePressure()
            break;
        case '0C':
            EngineRPM()
            break;
        case '0D':
            VehicleSpeed()
            break;
        case '0E':
            TimingAdvance()
            break;
        case '0F':
            IntakeAirTemperature()
            break;
        case '10':
            AirFlowRate()
            break;
        case '11':
            ThrottlePosition()
            break;
        case '12':
            CommandedSecondaryAirStatus()
            break;
        case '13':
            OxygenSensorsPresent2()
            break;
        case '14':
            OxygenSensor1()
            break;
        case '15':
            OxygenSensor2()
            break;
        case '16':
            OxygenSensor3()
            break;
        case '17':
            OxygenSensor4()
            break;
        case '18':
            OxygenSensor5()
            break;
        case '19':
            OxygenSensor6()
            break;
        case '1A':
            OxygenSensor7()
            break;
        case '1B':
            OxygenSensor8()
            break;
        case '1C':
            cOBDStandart()
            break;
        case '1D':
            OxygenSensorsPresent4()
            break;
        case '1E':
            AuxiliaryInputStatus()
            break;
        case '1F':
            EngineRunTime()
            break;
        case '20':
            PIDsSupported1()
            break;
        case '21':
            DistanceTravledWithMalfunctionLampOn()
            break;
        case '22':
            FuelRailPressure()
            break;
        case '23':
            FuelRailGaugePressure()
            break;
        case '24':
            OxygenSensorFAR1()
            break;
        case '25':
            OxygenSensorFAR2()
            break;
        case '26':
            OxygenSensorFAR3()
            break;
        case '27':
            OxygenSensorFAR4()
            break;
        case '28':
            OxygenSensorFAR5()
            break;
        case '29':
            OxygenSensorFAR6()
            break;
        case '2A':
            OxygenSensorFAR7()
            break;
        case '2B':
            OxygenSensorFAR8()
            break;
        case '2C':
            CommandedEGR()
            break;
        case '2D':
            EGRError()
            break;
        case '2E':
            CommandEvaporativePurge()
            break;
        case '2F':
            FuelTankLevelInput()
            break;
        case '30':
            WarmUpsSinceCodesCleared()
            break;
        case '31':
            DistanceTraveledSinceCodesCleared()
            break;
        case '32':
            SystemVaporPressure()
            break;
        case '33':
            AbsoluteBarometricPressure()
            break;
        case '34':
            OxygenSensorFAE1()
            break;
        case '35':
            OxygenSensorFAE2()
            break;
        case '36':
            OxygenSensorFAE3()
            break;
        case '37':
            OxygenSensorFAE4()
            break;
        case '38':
            OxygenSensorFAE5()
            break;
        case '39':
            OxygenSensorFAE6()
            break;
        case '3A':
            OxygenSensorFAE7()
            break;
        case '3B':
            OxygenSensorFAE8()
            break;
        case '3C':
            CatalystTempratureB1T1()
            break;
        case '3D':
            CatalystTempratureB2T1()
            break;
        case '3E':
            CatalystTempratureB1T2()
            break;
        case '3F':
            CatalystTempratureB2T2()
            break;
        case '40':
            PIDsSupported2()
            break;
        case '41':
            MonitorStatusThisDriveCycle()
            break;
        case '42':
            ControlModuleVoltage()
            break;
        case '43':
            AbsoluteLoadValue()
            break;
        case '44':
            FuelAirCommandedEquivalenceRatio()
            break;
        case '45':
            RelativeThrottlePosition()
            break;
        case '46':
            AmbientAirTemprature()
            break;
        case '47':
            AbsoluteThrottlePostionB()
            break;
        case '48':
            AbsoluteThrottlePostionC()
            break;
        case '49':
            AbsolutePedalPostionD()
            break;
        case '4A':
            AbsolutePedalPostionE()
            break;
        case '4B':
            AbsolutePedalPostionF()
            break;
        case '4C':
            CommandedThrottleActuator()
            break;
        case '4D':
            TimeRunWithMILOn()
            break;
        case '4E':
            TimeSinceTroubleCodesCleared()
            break;
        case '4F':
            MaxValues()
            break;
        case '50':
            MaxFlowRate()
            break;
        case '51':
            FuelType()
            break;
        case '52':
            EthanolFuel()
            break;
        case '53':
            AbsoluteSystemVaporPressure()
            break;
        case '54':
            SystemVaporPressure()
            break;
        case '55':
            ShortTermSecondaryOxygenSensorB13()
            break;
        case '56':
            LongTermSecondaryOxygenSensorB13()
            break;
        case '57':
            ShortTermSecondaryOxygenSensorB24()
            break;
        case '58':
            LongTermSecondaryOxygenSensorB24()
            break;
        case '59':
            FuelRailAbsolutePressure()
            break;
        case '5A':
            RelativeAcceleratorPedalPostion()
            break;
        case '5B':
            HybridBatteryCharge()
            break;
        case '5C':
            EngineOilTemprature()
            break;
        case '5D':
            FuelInjectionTiming()
            break;
        case '5E':
            EngineFuelRate()
            break;
        case '5F':
            EmissionRequirements()
            break;
        case '60':
            PIDsSupported3()
            break;
        case '61':
            DriversDemandEngineTorque()
            break;
        case '62':
            ActualEngineTorque()
            break;
        case '63':
            EngineReferenceTorque()
            break;
        case '64':
            EngineTorqueData()
            break;
        case '65':
            AuxiliaryInputOutputSupported()
            break;
        case '66':
            MARSensor()
            break;
        case '67':
            EngineCoolantTemprature()
            break;
        case '68':
            IntakeAirTemperatureSensor()
            break;
        case '69':
            CommandedEGRandEGRError()
            break;
        case '6A':
            CommandedDieselIntakeAirFlow()
            break;
        case '6B':
            ExhaustGasRecirculationTemperatur()
            break;
        case '6C':
            CommandedThrottleActuatorControlAndPosition()
            break;
        case '6D':
            FuelPressureControlSystem()
            break;
        case '6E':
            InjectionPressureControl()
            break;
        case '6F':
            TurbochargerCompressorInletPressure()
            break;
        case '70':
            BoostPressureControl()
            break;
        case '71':
            VGT()
            break;
        case '72':
            WastegateControl()
            break;
        case '73':
            ExhaustPressure()
            break;
        case '74':
            TurbochargerRPM()
            break;
        case '75':
            TurbochargerTemperature()
            break;
        case '76':
            TurbochargerTemperature()
            break;
        case '77':
            ChargeAirCoolerTemperature()
            break;
        case '78':
            EGT1()
            break;
        case '79':
            EGT2()
            break;
        case '7A':
            DPF()
            break;
        case '7B':
            DPF()
            break;
        case '7C':
            DPFTemprature()
            break;
        case '7D':
            NOxNTE()
            break;
        case '7E':
            PMNTE()
            break;
        case '7F':
            EngineRunTime()
            break;
        case '80':
            PIDsSupported4()
            break;
        case '81':
            AECD()
            break;
        case '82':
            AECD()
            break;
        case '83':
            NOxSensor()
            break;
        case '84':
            MainfoldSurfaceTemperature()
            break;
        case '85':
            NOxReagentSystem()
            break;
        case '86':
            PmSensor()
            break;
        case '87':
            IntakeManifoldAbsolutePressure()
            break;
        case '88':
            SCRInduceSystem()
            break;
        case '89':
            RunTimeAECD1()
            break;
        case '8A':
            RunTimeAECD2()
            break;
        case '8B':
            DieselAftertreatment()
            break;
        case '8C':
            O2Sensor()
            break;
        case '8D':
            ThrottlePositionG()
            break;
        case '8E':
            EngineFriction()
            break;
        case '8F':
            PMsensor1a2()
            break;
        case '90':
            VechicleOBDSystemInformation()
            break;
        case '91':
            VechicleOBDSystemInformation()
            break;
        case '92':
            FuelSystemControl()
            break;
        case '93':
            VechicleOBDCountersSupport()
            break;
        case '94':
            NOxWarningAndInducementSystem()
            break;
        case '98':
            ExhaustGasTemperatureSensor()
            break;
        case '99':
            ExhaustGasTemperatureSensor()
            break;
        case '9A':
            EVSystemData()
            break;
        case '9B':
            DieselExhaustFluidSensorData()
            break;
        case '9C':
            O2Sensor()
            break;
        case '9D':
            EngineFuelRate()
            break;
        case '9E':
            EngineExhaustFlowRate()
            break;
        case '9F':
            FuelSystemPercentage()
            break;
        case 'A0':
            PIDsSupported5()
            break;
        case 'A1':
            NOxSensorCorrected()
            break;
        case 'A2':
            CylinderFuelRate()
            break;
        case 'A3':
            SystemVaporPressure()
            break;
        case 'A4':
            TransmissionActualGear()
            break;
        case 'A5':
            DieselExhaustFluidDosing()
            break;
        case 'A6':
            Odometer()
            break;
        case 'C0':
            PIDsSupported6()
            break;
        case 'C3':
            EngineIdleRequest()
            break;
        case 'C4':
            EngineStopRequest()
            break;
    }
}