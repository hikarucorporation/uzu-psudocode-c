// Function : createInstance
// Namespace: juce:JucePluginFactory
// Entry    : 001a4a30
// Prototype: JuceVST3Component * createInstance(JucePluginFactory * this, char * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001a4a30 - 001a4ad2


/* juce::JucePluginFactory::createInstance(juce::JucePluginFactoryBase::ClassEntry const&) */

JuceVST3Component * __thiscall
juce::JucePluginFactory::createInstance
          (JucePluginFactory *this,char *param_1,undefined8 param_2,undefined8 param_3,uint *param_4
          ,undefined8 param_5)

{
  JuceVST3EditController *this_00;
  JuceVST3Component *pJVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2[0] = -(JuceVST3Component::iid[8] == *param_1);
  auVar2[1] = -(JuceVST3Component::iid[9] == param_1[1]);
  auVar2[2] = -(JuceVST3Component::iid[10] == param_1[2]);
  auVar2[3] = -(JuceVST3Component::iid[0xb] == param_1[3]);
  auVar2[4] = -(JuceVST3Component::iid[0xc] == param_1[4]);
  auVar2[5] = -(JuceVST3Component::iid[0xd] == param_1[5]);
  auVar2[6] = -(JuceVST3Component::iid[0xe] == param_1[6]);
  auVar2[7] = -(JuceVST3Component::iid[0xf] == param_1[7]);
  auVar2[8] = -(JuceVST3Component::iid[0x10] == param_1[8]);
  auVar2[9] = -(JuceVST3Component::iid[0x11] == param_1[9]);
  auVar2[10] = -(JuceVST3Component::iid[0x12] == param_1[10]);
  auVar2[0xb] = -(JuceVST3Component::iid[0x13] == param_1[0xb]);
  auVar2[0xc] = -(JuceVST3Component::iid[0x14] == param_1[0xc]);
  auVar2[0xd] = -(JuceVST3Component::iid[0x15] == param_1[0xd]);
  auVar2[0xe] = -(JuceVST3Component::iid[0x16] == param_1[0xe]);
  auVar2[0xf] = -(JuceVST3Component::iid[0x17] == param_1[0xf]);
  if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf) ==
      0xffff) {
    pJVar1 = operator_new(0x410);
                    /* try { // try from 001a4a8d to 001a4a97 has its CatchHandler @ 001a4ad5 */
    JuceVST3Component::JuceVST3Component
              (pJVar1,(long *)(this + 0x1d8),(long *)(this + 0x1d0),param_3,param_4,param_5);
    pJVar1 = pJVar1 + 8;
  }
  else {
    auVar3[0] = -(JuceVST3EditController::iid[8] == *param_1);
    auVar3[1] = -(JuceVST3EditController::iid[9] == param_1[1]);
    auVar3[2] = -(JuceVST3EditController::iid[10] == param_1[2]);
    auVar3[3] = -(JuceVST3EditController::iid[0xb] == param_1[3]);
    auVar3[4] = -(JuceVST3EditController::iid[0xc] == param_1[4]);
    auVar3[5] = -(JuceVST3EditController::iid[0xd] == param_1[5]);
    auVar3[6] = -(JuceVST3EditController::iid[0xe] == param_1[6]);
    auVar3[7] = -(JuceVST3EditController::iid[0xf] == param_1[7]);
    auVar3[8] = -(JuceVST3EditController::iid[0x10] == param_1[8]);
    auVar3[9] = -(JuceVST3EditController::iid[0x11] == param_1[9]);
    auVar3[10] = -(JuceVST3EditController::iid[0x12] == param_1[10]);
    auVar3[0xb] = -(JuceVST3EditController::iid[0x13] == param_1[0xb]);
    auVar3[0xc] = -(JuceVST3EditController::iid[0x14] == param_1[0xc]);
    auVar3[0xd] = -(JuceVST3EditController::iid[0x15] == param_1[0xd]);
    auVar3[0xe] = -(JuceVST3EditController::iid[0x16] == param_1[0xe]);
    auVar3[0xf] = -(JuceVST3EditController::iid[0x17] == param_1[0xf]);
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf)
        == 0xffff) {
      this_00 = operator_new(0x62c0);
                    /* try { // try from 001a4ab9 to 001a4ac3 has its CatchHandler @ 001a4ad3 */
      JuceVST3EditController::JuceVST3EditController
                (this_00,(long *)(this + 0x1d8),(long *)(this + 0x1d0),param_3,param_4,param_5);
      pJVar1 = (JuceVST3Component *)(this_00 + 0x30);
    }
    else {
      pJVar1 = (JuceVST3Component *)0x0;
    }
  }
  return pJVar1;
}


