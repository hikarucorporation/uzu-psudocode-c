// Function : samplerate_tilde_bang
// Namespace: 
// Entry    : 004f9490
// Prototype: undefined samplerate_tilde_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004f9490 - 004f950e


void samplerate_tilde_bang
               (undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5
               ,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float extraout_XMM0_Da;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = *(long **)(param_9 + 0x18);
  lVar3 = *(long *)(param_9 + 0x38);
  sys_getsr();
  fVar4 = extraout_XMM0_Da;
  if (lVar3 == 0) {
LAB_004f9500:
    outlet_float(CONCAT44(extraout_XMM0_Db,fVar4),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8,plVar1);
    return;
  }
  plVar2 = *(long **)(lVar3 + 0x30);
  do {
    if (plVar2 != (long *)0x0) goto LAB_004f94f0;
    while( true ) {
      do {
        lVar3 = *(long *)(lVar3 + 0x48);
        if (lVar3 == 0) goto LAB_004f9500;
        plVar2 = *(long **)(lVar3 + 0x30);
      } while (plVar2 == (long *)0x0);
LAB_004f94f0:
      if (*plVar2 != *(long *)PTR_block_class_00715ae0) break;
      param_2 = (ulong)(uint)(float)(int)plVar2[0xb];
      param_3 = (ulong)(uint)(float)*(int *)((long)plVar2 + 0x5c);
      fVar4 = (fVar4 * (float)(int)plVar2[0xb]) / (float)*(int *)((long)plVar2 + 0x5c);
    }
    plVar2 = (long *)plVar2[1];
  } while( true );
}


