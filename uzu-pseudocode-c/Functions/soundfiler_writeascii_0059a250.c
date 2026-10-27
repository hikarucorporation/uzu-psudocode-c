// Function : soundfiler_writeascii
// Namespace: 
// Entry    : 0059a250
// Prototype: ulong soundfiler_writeascii(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, char * param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 * param_14)
// Body     : 0059a250 - 0059a379


ulong soundfiler_writeascii
                (undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                double param_6,double param_7,undefined8 param_8,long param_9,char *param_10,
                int *param_11,undefined8 param_12,char *param_13,undefined8 *param_14)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  undefined8 uVar8;
  char acStackY_498 [128];
  double in_stack_fffffffffffffbe8;
  
  puVar1 = binbuf_new();
  uVar3 = 1000;
  uVar7 = canvas_makefilename(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,*(long *)(param_9 + 0x38),param_10,acStackY_498 + 0x80,1000,
                              param_13,param_14);
  uVar2 = *(ulong *)(param_11 + 2);
  uVar8 = extraout_RDX;
  if (200000 < (long)uVar2) {
    uVar7 = post(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "warning: writing %d table points to ascii file!");
    uVar2 = *(ulong *)(param_11 + 2);
    uVar8 = extraout_RDX_00;
  }
  uVar6 = 0;
  if (0 < (long)uVar2) {
    uVar3 = (ulong)(uint)param_11[4];
    if (param_11[4] < 1) {
      uVar6 = uVar2 & 0xffffffff;
    }
    else {
      lVar4 = (long)*param_11;
      uVar6 = 0;
      do {
        if (0 < (int)uVar3) {
          lVar5 = 0;
          do {
            uVar7 = binbuf_addv((double)((float)param_11[0xe] *
                                        *(float *)(*(long *)(*(long *)(param_11 + 6) + lVar5 * 8) +
                                                  lVar4 * 8)),param_2,param_3,param_4,param_5,
                                param_6,param_7,param_8,(int *)puVar1,0x651ee3,uVar8,uVar3,param_13,
                                param_14,in_stack_fffffffffffffbe8);
            lVar5 = lVar5 + 1;
            uVar3 = (ulong)param_11[4];
            uVar8 = extraout_RDX_01;
          } while (lVar5 < (long)uVar3);
          uVar2 = *(ulong *)(param_11 + 2);
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 1;
      } while ((long)uVar6 < (long)uVar2);
    }
  }
  uVar8 = binbuf_addv(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int *)puVar1,
                      0x656033,uVar8,uVar3,param_13,param_14,in_stack_fffffffffffffbe8);
  uVar8 = binbuf_write(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
                       acStackY_498 + 0x80,"",1,param_13,param_14);
  binbuf_free(puVar1);
  uVar6 = uVar6 & 0xffffffff;
  if ((int)uVar8 != 0) {
    uVar6 = 0;
  }
  return uVar6;
}


