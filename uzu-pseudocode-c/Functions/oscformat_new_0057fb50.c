// Function : oscformat_new
// Namespace: 
// Entry    : 0057fb50
// Prototype: long * oscformat_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057fb50 - 0057fc53


long * oscformat_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar11;
  
  uVar8 = (uint)param_10;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,oscformat_class,
                  param_10,param_11,param_12,param_13,param_14);
  puVar4 = gensym("list");
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
             (long)puVar4,extraout_RDX,param_12,param_13,param_14);
  puVar5 = getbytes(1);
  plVar3[6] = (long)puVar5;
  plVar3[7] = 1;
  *puVar5 = 0;
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3[8] = *plVar6 + 0x168;
  uVar11 = extraout_XMM0_Qa_00;
  if ((((1 < (int)uVar8) && (*param_11 == 2)) && (param_11[4] == 2)) &&
     (iVar2 = strcmp((char *)**(undefined8 **)(param_11 + 2),"-f"), uVar11 = extraout_XMM0_Qa_01,
     iVar2 == 0)) {
    pbVar7 = (byte *)**(undefined8 **)(param_11 + 6);
    bVar1 = *pbVar7;
    uVar10 = bVar1 - 0x62;
    bVar9 = (byte)uVar10;
    while ((bVar9 < 0x12 && ((0x20091UL >> ((ulong)(uVar10 & 0xff) & 0x3f) & 1) != 0))) {
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar10 = bVar1 - 0x62;
      bVar9 = (byte)uVar10;
    }
    if (bVar1 == 0) {
      plVar3[8] = (long)*(undefined8 **)(param_11 + 6);
    }
    else {
      uVar11 = pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar3,
                        "oscformat \'%s\' may only contain \'f\', \'i\'. \'s\', and/or \'b\'",pbVar7
                        ,0x20091,param_13,param_14);
    }
    uVar8 = uVar8 - 2;
    param_11 = param_11 + 8;
  }
  oscformat_set(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,0,uVar8,
                param_11,param_13,param_14);
  return plVar3;
}


