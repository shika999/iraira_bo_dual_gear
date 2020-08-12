void StepperMove_A() {
    stepperX.run();
    stepperY.run();
    stepperX.move(-4000); //歯車X_逆回転
    stepperY.move(4000);  //歯車Y_正回転    
}

void StepperMove_B(){
    stepperX.run();
    stepperY.run();
    stepperX.move(4000); //歯車X_正回転
    stepperY.move(-4000);//歯車Y_逆回転
}
