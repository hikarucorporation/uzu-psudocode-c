// Function : fromRegistryString
// Namespace: Steinberg:FUID
// Entry    : 001861e0
// Prototype: undefined8 fromRegistryString(FUID * this, char * param_1)
// Body     : 001861e0 - 00186593


/* Steinberg::FUID::fromRegistryString(char const*) */

undefined8 __thiscall Steinberg::FUID::fromRegistryString(FUID *this,char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  char local_2f;
  char local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (sVar1 = strlen(param_1), sVar1 != 0x26))
  {
    return 0;
  }
  local_2f = param_1[1];
  local_2e = param_1[2];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[8] = local_2c._0_1_;
  local_2f = param_1[3];
  local_2e = param_1[4];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[9] = local_2c._0_1_;
  local_2f = param_1[5];
  local_2e = param_1[6];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[10] = local_2c._0_1_;
  local_2f = param_1[7];
  local_2e = param_1[8];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0xb] = local_2c._0_1_;
  local_2f = param_1[10];
  local_2e = param_1[0xb];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0xc] = local_2c._0_1_;
  local_2f = param_1[0xc];
  local_2e = param_1[0xd];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0xd] = local_2c._0_1_;
  local_2f = param_1[0xf];
  local_2e = param_1[0x10];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0xe] = local_2c._0_1_;
  local_2f = param_1[0x11];
  local_2e = param_1[0x12];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0xf] = local_2c._0_1_;
  local_2f = param_1[0x14];
  local_2e = param_1[0x15];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0x10] = local_2c._0_1_;
  local_2f = param_1[0x16];
  local_2e = param_1[0x17];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0x11] = local_2c._0_1_;
  local_2f = param_1[0x19];
  local_2e = param_1[0x1a];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0x12] = local_2c._0_1_;
  local_2f = param_1[0x1b];
  local_2e = param_1[0x1c];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0x13] = local_2c._0_1_;
  local_2f = param_1[0x1d];
  local_2e = param_1[0x1e];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0x14] = local_2c._0_1_;
  local_2f = param_1[0x1f];
  local_2e = param_1[0x20];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0x15] = local_2c._0_1_;
  local_2f = param_1[0x21];
  local_2e = param_1[0x22];
  local_2d = 0;
  local_2c = 0;
  __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0x16] = local_2c._0_1_;
  local_2f = param_1[0x23];
  local_2e = param_1[0x24];
  local_2d = 0;
  local_2c = 0;
  uVar2 = __isoc99_sscanf(&local_2f,&DAT_005db51c,&local_2c);
  this[0x17] = local_2c._0_1_;
  return CONCAT71((int7)((ulong)uVar2 >> 8),1);
}


