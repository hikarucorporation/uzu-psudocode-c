// Function : voutlet_newsig
// Namespace: 
// Entry    : 0051af50
// Prototype: long * voutlet_newsig(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051af50 - 0051b066


long * voutlet_newsig(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                     ,char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_voutlet_class_00715fc0,param_10,param_11,param_12,param_13,param_14);
  plVar2 = (long *)canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8);
  plVar1[6] = (long)plVar2;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar2 = canvas_addoutlet(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,plVar2,plVar1,*plVar3 + 0xf0,param_12,param_13,param_14);
  plVar1[7] = (long)plVar2;
  inlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1
            ,(long)plVar1,*plVar3 + 0xf0,*plVar3 + 0xf0,param_13,param_14);
  *(undefined4 *)(plVar1 + 8) = 0;
  puVar4 = getbytes(0x48);
  plVar1[0xd] = (long)puVar4;
  pvVar5 = getbytes((long)(int)plVar1[8] << 2);
  *puVar4 = pvVar5;
  resample_init((long)(puVar4 + 1));
  *(undefined4 *)(plVar1 + 8) = 0;
  *(undefined4 *)(plVar1 + 0xc) = 1;
  puVar4 = gensym("hold");
  if (puVar4 == param_9) {
    iVar6 = 1;
  }
  else {
    puVar4 = gensym("lin");
    iVar6 = 2;
    if (puVar4 != param_9) {
      puVar4 = gensym("linear");
      if (puVar4 != param_9) {
        puVar4 = gensym("pad");
        iVar6 = -(uint)(puVar4 != param_9);
      }
    }
  }
  *(int *)(plVar1 + 10) = iVar6;
  return plVar1;
}


