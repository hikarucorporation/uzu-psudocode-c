// Function : parsetimeunits
// Namespace: 
// Entry    : 0055ba10
// Prototype: undefined parsetimeunits(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, float * param_11, undefined4 * param_12, char * param_13, undefined8 param_14)
// Body     : 0055ba10 - 0055bc3e


void parsetimeunits(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 *param_10,float *param_11,undefined4 *param_12,
                   char *param_13,undefined8 param_14)

{
  char *__s1;
  char cVar1;
  char *__s1_00;
  int iVar2;
  undefined4 *puVar3;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar4;
  float fVar6;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  __s1_00 = (char *)*param_10;
  uVar8 = 0;
  fVar5 = (float)(~-(uint)(0.0 < param_1) & (uint)DAT_005d9038 |
                 (uint)param_1 & -(uint)(0.0 < param_1));
  auVar10 = ZEXT416((uint)fVar5);
  cVar1 = *__s1_00;
  puVar3 = param_12;
  fVar6 = DAT_005d9038;
  if (((cVar1 != 'p') || (__s1_00[1] != 'e')) || (__s1_00[2] != 'r')) {
    iVar2 = strcmp(__s1_00,"millisecond");
    if ((iVar2 == 0) || (iVar2 = strcmp(__s1_00,"msec"), iVar2 == 0)) {
      *param_12 = 0;
      goto LAB_0055bb98;
    }
    iVar2 = strncmp(__s1_00,"sec",3);
    if (iVar2 == 0) {
      *param_12 = 0;
      fVar5 = fVar5 * DAT_005d94d8;
      goto LAB_0055bb98;
    }
    iVar2 = strncmp(__s1_00,"min",3);
    if (iVar2 == 0) {
      *param_12 = 0;
      fVar5 = fVar5 * DAT_0065a95c;
      goto LAB_0055bb98;
    }
    iVar2 = strncmp(__s1_00,"sam",3);
    uVar9 = auVar10._0_8_;
    if (iVar2 == 0) {
      *param_12 = 1;
      goto LAB_0055bb98;
    }
    uVar4 = extraout_XMM0_Da_00;
    uVar7 = extraout_XMM0_Db_00;
    if (cVar1 == '\0') {
      pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar8,fVar6),uVar9,param_4
               ,param_5,param_6,param_7,param_8,param_9,
               "tempo setting needs time unit (\'sec\', \'samp\', \'permin\', etc.",extraout_RDX,
               puVar3,param_13,param_14);
      goto LAB_0055bc0a;
    }
LAB_0055bb76:
    pd_error(CONCAT44(uVar7,uVar4),CONCAT44(uVar8,fVar6),uVar9,param_4,param_5,param_6,param_7,
             param_8,param_9,"%s: unknown time unit",__s1_00,puVar3,param_13,param_14);
LAB_0055bc0a:
    *param_11 = 1.0;
    *param_12 = 0;
    return;
  }
  __s1 = __s1_00 + 3;
  iVar2 = strcmp(__s1,"millisecond");
  if ((iVar2 == 0) || (iVar2 = strcmp(__s1,"msec"), iVar2 == 0)) {
    *param_12 = 0;
LAB_0055bbe0:
    fVar6 = DAT_005d9038;
  }
  else {
    iVar2 = strncmp(__s1,"sec",3);
    if (iVar2 == 0) {
      *param_12 = 0;
      fVar6 = DAT_005d94d8;
    }
    else {
      iVar2 = strncmp(__s1,"min",3);
      if (iVar2 != 0) {
        iVar2 = strncmp(__s1,"sam",3);
        uVar9 = auVar10._0_8_;
        uVar4 = extraout_XMM0_Da;
        uVar7 = extraout_XMM0_Db;
        if (iVar2 != 0) goto LAB_0055bb76;
        *param_12 = 1;
        goto LAB_0055bbe0;
      }
      *param_12 = 0;
      fVar6 = DAT_0065a95c;
    }
  }
  fVar5 = fVar6 / fVar5;
LAB_0055bb98:
  *param_11 = fVar5;
  return;
}


