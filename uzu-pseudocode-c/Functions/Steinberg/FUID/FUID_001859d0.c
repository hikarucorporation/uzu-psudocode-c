// Function : FUID
// Namespace: Steinberg:FUID
// Entry    : 001859d0
// Prototype: undefined FUID(FUID * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
// Body     : 001859d0 - 00185a3f


/* Steinberg::FUID::FUID(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
Steinberg::FUID::FUID
          (FUID *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined ***)this = &PTR__FUID_00704de0;
  this[8] = SUB41((uint)param_1 >> 0x18,0);
  this[9] = SUB41((uint)param_1 >> 0x10,0);
  this[10] = SUB41((uint)param_1 >> 8,0);
  this[0xb] = SUB41(param_1,0);
  this[0xc] = SUB41((uint)param_2 >> 0x18,0);
  this[0xd] = SUB41((uint)param_2 >> 0x10,0);
  this[0xe] = SUB41((uint)param_2 >> 8,0);
  this[0xf] = SUB41(param_2,0);
  this[0x10] = SUB41((uint)param_3 >> 0x18,0);
  this[0x11] = SUB41((uint)param_3 >> 0x10,0);
  this[0x12] = SUB41((uint)param_3 >> 8,0);
  this[0x13] = SUB41(param_3,0);
  this[0x14] = SUB41((uint)param_4 >> 0x18,0);
  this[0x15] = SUB41((uint)param_4 >> 0x10,0);
  this[0x16] = SUB41((uint)param_4 >> 8,0);
  this[0x17] = SUB41(param_4,0);
  return;
}


