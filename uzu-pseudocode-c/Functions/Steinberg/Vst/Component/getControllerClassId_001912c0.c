// Function : getControllerClassId
// Namespace: Steinberg:Vst:Component
// Entry    : 001912c0
// Prototype: undefined8 getControllerClassId(Component * this, undefined8 * param_1)
// Body     : 001912c0 - 001912f0


/* non-virtual thunk to Steinberg::Vst::Component::getControllerClassId(char*) */

undefined8 __thiscall
Steinberg::Vst::Component::getControllerClassId(Component *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2[0] = -(this[0x10] == (Component)0x0);
  auVar2[1] = -(this[0x11] == (Component)0x0);
  auVar2[2] = -(this[0x12] == (Component)0x0);
  auVar2[3] = -(this[0x13] == (Component)0x0);
  auVar2[4] = -(this[0x14] == (Component)0x0);
  auVar2[5] = -(this[0x15] == (Component)0x0);
  auVar2[6] = -(this[0x16] == (Component)0x0);
  auVar2[7] = -(this[0x17] == (Component)0x0);
  auVar2[8] = -(this[0x18] == (Component)0x0);
  auVar2[9] = -(this[0x19] == (Component)0x0);
  auVar2[10] = -(this[0x1a] == (Component)0x0);
  auVar2[0xb] = -(this[0x1b] == (Component)0x0);
  auVar2[0xc] = -(this[0x1c] == (Component)0x0);
  auVar2[0xd] = -(this[0x1d] == (Component)0x0);
  auVar2[0xe] = -(this[0x1e] == (Component)0x0);
  auVar2[0xf] = -(this[0x1f] == (Component)0x0);
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
    return 1;
  }
  uVar1 = *(undefined8 *)(this + 0x18);
  *param_1 = *(undefined8 *)(this + 0x10);
  param_1[1] = uVar1;
  return 0;
}


