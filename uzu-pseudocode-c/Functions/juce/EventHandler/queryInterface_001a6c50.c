// Function : queryInterface
// Namespace: juce:EventHandler
// Entry    : 001a6c50
// Prototype: undefined8 queryInterface(EventHandler * this, undefined1[16] * param_1, undefined8 * param_2)
// Body     : 001a6c50 - 001a6c86


/* juce::EventHandler::queryInterface(char const*, void**) */

undefined8 __thiscall
juce::EventHandler::queryInterface
          (EventHandler *this,undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_1;
  auVar2[0] = -(Steinberg::Linux::IEventHandler::iid[8] == auVar1[0]);
  auVar2[1] = -(Steinberg::Linux::IEventHandler::iid[9] == auVar1[1]);
  auVar2[2] = -(Steinberg::Linux::IEventHandler::iid[10] == auVar1[2]);
  auVar2[3] = -(Steinberg::Linux::IEventHandler::iid[0xb] == auVar1[3]);
  auVar2[4] = -(Steinberg::Linux::IEventHandler::iid[0xc] == auVar1[4]);
  auVar2[5] = -(Steinberg::Linux::IEventHandler::iid[0xd] == auVar1[5]);
  auVar2[6] = -(Steinberg::Linux::IEventHandler::iid[0xe] == auVar1[6]);
  auVar2[7] = -(Steinberg::Linux::IEventHandler::iid[0xf] == auVar1[7]);
  auVar2[8] = -(Steinberg::Linux::IEventHandler::iid[0x10] == auVar1[8]);
  auVar2[9] = -(Steinberg::Linux::IEventHandler::iid[0x11] == auVar1[9]);
  auVar2[10] = -(Steinberg::Linux::IEventHandler::iid[0x12] == auVar1[10]);
  auVar2[0xb] = -(Steinberg::Linux::IEventHandler::iid[0x13] == auVar1[0xb]);
  auVar2[0xc] = -(Steinberg::Linux::IEventHandler::iid[0x14] == auVar1[0xc]);
  auVar2[0xd] = -(Steinberg::Linux::IEventHandler::iid[0x15] == auVar1[0xd]);
  auVar2[0xe] = -(Steinberg::Linux::IEventHandler::iid[0x16] == auVar1[0xe]);
  auVar2[0xf] = -(Steinberg::Linux::IEventHandler::iid[0x17] == auVar1[0xf]);
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
    *param_2 = this;
    (**(code **)(*(long *)this + 8))();
    return 0;
  }
  *param_2 = 0;
  return 1;
}


