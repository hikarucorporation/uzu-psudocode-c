// Function : to4Int
// Namespace: Steinberg:FUID
// Entry    : 00185b90
// Prototype: undefined to4Int(FUID * this, uint * param_1, uint * param_2, uint * param_3, uint * param_4)
// Body     : 00185b90 - 00185bad


/* Steinberg::FUID::to4Int(unsigned int&, unsigned int&, unsigned int&, unsigned int&) const */

void __thiscall
Steinberg::FUID::to4Int(FUID *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 8);
  *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(this + 0xc);
  *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(this + 0x10);
  *param_3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(this + 0x14);
  *param_4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return;
}


