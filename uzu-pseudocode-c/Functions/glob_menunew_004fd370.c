// Function : glob_menunew
// Namespace: 
// Entry    : 004fd370
// Prototype: undefined glob_menunew(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 param_9, char * param_10, undefined8 param_11, undefined8 param_12, uint * param_13, undefined4 * param_14)
// Body     : 004fd370 - 004fd3c1


void glob_menunew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,undefined8 param_9,
                 char *param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
                 undefined4 *param_14)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 extraout_RDX;
  char *pcVar4;
  undefined **ppuVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  ppuVar5 = &PTR_007159b0;
  pcVar4 = param_10;
  plVar2 = (long *)__tls_get_addr();
  lVar1 = *(long *)(*plVar2 + 0x48);
  *(char **)(lVar1 + 0x10) = param_10;
  *(undefined8 *)(lVar1 + 0x18) = param_11;
  puVar3 = (undefined *)0x0;
  canvas_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,ppuVar5,pcVar4,0,0,param_13,param_14);
  canvas_pop((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(long **)(*plVar2 + 0x128),pcVar4,extraout_RDX,puVar3,(char *)param_13,
             (undefined *)param_14);
  return;
}


