// Function : file_isfile_symbol
// Namespace: 
// Entry    : 0057c190
// Prototype: undefined file_isfile_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057c190 - 0057c1f5


void file_isfile_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  stat sStack_98;
  
  iVar1 = do_file_stat(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       (char *)*param_10,&sStack_98,(uint *)0x0,param_13,param_14);
  if (iVar1 < 0) {
    outlet_bang(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,*(long **)(param_9 + 0x60));
    return;
  }
  if ((sStack_98.st_mode & 0xf000) == 0x8000) {
    outlet_float((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x58));
    return;
  }
  outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x58))
  ;
  return;
}


