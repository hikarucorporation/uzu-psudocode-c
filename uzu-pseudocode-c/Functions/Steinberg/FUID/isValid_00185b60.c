// Function : isValid
// Namespace: Steinberg:FUID
// Entry    : 00185b60
// Prototype: undefined2 isValid(FUID * this)
// Body     : 00185b60 - 00185b7f


/* Steinberg::FUID::isValid() const */

undefined2 __thiscall Steinberg::FUID::isValid(FUID *this)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  
  auVar2[0] = -(this[8] == (FUID)0x0);
  auVar2[1] = -(this[9] == (FUID)0x0);
  auVar2[2] = -(this[10] == (FUID)0x0);
  auVar2[3] = -(this[0xb] == (FUID)0x0);
  auVar2[4] = -(this[0xc] == (FUID)0x0);
  auVar2[5] = -(this[0xd] == (FUID)0x0);
  auVar2[6] = -(this[0xe] == (FUID)0x0);
  auVar2[7] = -(this[0xf] == (FUID)0x0);
  auVar2[8] = -(this[0x10] == (FUID)0x0);
  auVar2[9] = -(this[0x11] == (FUID)0x0);
  auVar2[10] = -(this[0x12] == (FUID)0x0);
  auVar2[0xb] = -(this[0x13] == (FUID)0x0);
  auVar2[0xc] = -(this[0x14] == (FUID)0x0);
  auVar2[0xd] = -(this[0x15] == (FUID)0x0);
  auVar2[0xe] = -(this[0x16] == (FUID)0x0);
  auVar2[0xf] = -(this[0x17] == (FUID)0x0);
  uVar1 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf;
  return CONCAT11((char)(uVar1 >> 8),uVar1 != 0xffff);
}


