// Function : sys_get_audio_settings
// Namespace: 
// Entry    : 0053c3b0
// Prototype: undefined sys_get_audio_settings(undefined8 * param_1)
// Body     : 0053c3b0 - 0053c463


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sys_get_audio_settings(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (initted == '\0') {
    _audio_nextsettings = 0x100000009;
    DAT_0071dfd8 = 0xac44;
    DAT_0071dfdc = 0x19;
    _DAT_0071dfc4 = 0x200000001;
    _DAT_0071dfb0 = 1;
    _DAT_0071dfb4 = 0;
    _DAT_0071df9c = 0x200000001;
    _DAT_0071df8c = 0;
    DAT_0071dfe4 = 0x40;
    initted = '\x01';
  }
  *(undefined4 *)(param_1 + 0xc) = DAT_0071dfe4;
  uVar1 = CONCAT44(DAT_0071dfe0,DAT_0071dfdc);
  param_1[10] = CONCAT44(DAT_0071dfd8,DAT_0071dfd4);
  param_1[0xb] = uVar1;
  uVar1 = _DAT_0071dfcc;
  param_1[8] = _DAT_0071dfc4;
  param_1[9] = uVar1;
  uVar1 = _DAT_0071dfbc;
  param_1[6] = CONCAT44(DAT_0071dfb8,_DAT_0071dfb4);
  param_1[7] = uVar1;
  uVar1 = CONCAT44(_DAT_0071dfb0,DAT_0071dfac);
  param_1[4] = _DAT_0071dfa4;
  param_1[5] = uVar1;
  uVar1 = _DAT_0071df9c;
  param_1[2] = _DAT_0071df94;
  param_1[3] = uVar1;
  uVar1 = CONCAT44(DAT_0071df90,_DAT_0071df8c);
  *param_1 = _audio_nextsettings;
  param_1[1] = uVar1;
  return;
}


