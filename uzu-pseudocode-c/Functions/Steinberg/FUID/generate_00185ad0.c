// Function : generate
// Namespace: Steinberg:FUID
// Entry    : 00185ad0
// Prototype: undefined4 generate(FUID * this)
// Body     : 00185ad0 - 00185b5c


/* Steinberg::FUID::generate() */

undefined4 __thiscall Steinberg::FUID::generate(FUID *this)

{
  int iVar1;
  
  srand((uint)this);
  iVar1 = rand();
  this[8] = SUB41(iVar1,0);
  iVar1 = rand();
  this[9] = SUB41(iVar1,0);
  iVar1 = rand();
  this[10] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0xb] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0xc] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0xd] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0xe] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0xf] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0x10] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0x11] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0x12] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0x13] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0x14] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0x15] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0x16] = SUB41(iVar1,0);
  iVar1 = rand();
  this[0x17] = SUB41(iVar1,0);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


