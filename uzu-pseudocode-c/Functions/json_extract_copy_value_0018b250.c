// Function : json_extract_copy_value
// Namespace: 
// Entry    : 0018b250
// Prototype: undefined json_extract_copy_value(long * param_1, undefined8 * param_2)
// Body     : 0018b250 - 0018b454


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_extract_copy_value(json_extract_state_s*, json_value_s const*) */

void __cdecl json_extract_copy_value(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  
  puVar5 = (undefined8 *)*param_1;
  uVar3 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar3;
  plVar1 = (long *)*param_1;
  plVar6 = plVar1 + 2;
  *param_1 = (long)plVar6;
  *plVar1 = (long)plVar6;
  switch(param_2[1]) {
  case 0:
    lVar4 = ((long *)*param_2)[1];
    *plVar6 = *(long *)*param_2;
    plVar1[3] = lVar4;
    plVar6 = (long *)*param_1;
    *param_1 = (long)(plVar6 + 2);
    memcpy((void *)param_1[1],(void *)*plVar6,plVar6[1] + 1);
    lVar4 = param_1[1];
    *plVar6 = lVar4;
    lVar4 = lVar4 + plVar6[1] + 1;
    goto LAB_0018b301;
  case 1:
    lVar4 = ((long *)*param_2)[1];
    *plVar6 = *(long *)*param_2;
    plVar1[3] = lVar4;
    plVar6 = (long *)*param_1;
    *param_1 = (long)(plVar6 + 2);
    memcpy((void *)param_1[1],(void *)*plVar6,plVar6[1]);
    lVar4 = param_1[1];
    *plVar6 = lVar4;
    lVar4 = lVar4 + plVar6[1];
LAB_0018b301:
    param_1[1] = lVar4;
    break;
  case 2:
    lVar4 = ((long *)*param_2)[1];
    *plVar6 = *(long *)*param_2;
    plVar1[3] = lVar4;
    plVar1 = (long *)*param_1;
    plVar6 = plVar1 + 2;
    *param_1 = (long)plVar6;
    puVar5 = (undefined8 *)*plVar1;
    *plVar1 = (long)plVar6;
    if (plVar1[1] != 0) {
      uVar7 = 1;
      while( true ) {
        plVar6[2] = puVar5[2];
        uVar3 = puVar5[1];
        *plVar6 = *puVar5;
        plVar6[1] = uVar3;
        plVar6 = (long *)*param_1;
        *param_1 = (long)(plVar6 + 3);
        lVar4 = ((long *)*plVar6)[1];
        plVar6[3] = *(long *)*plVar6;
        plVar6[4] = lVar4;
        plVar2 = (long *)*param_1;
        *param_1 = (long)(plVar2 + 2);
        *plVar6 = (long)plVar2;
        memcpy((void *)param_1[1],(void *)*plVar2,plVar2[1] + 1);
        lVar4 = param_1[1];
        *plVar2 = lVar4;
        param_1[1] = lVar4 + plVar2[1] + 1;
        puVar5 = (undefined8 *)plVar6[1];
        plVar6[1] = *param_1;
        json_extract_copy_value(param_1,puVar5);
        puVar5 = (undefined8 *)plVar6[2];
        if (puVar5 != (undefined8 *)0x0) {
          plVar6[2] = *param_1;
        }
        if ((ulong)plVar1[1] <= uVar7) break;
        plVar6 = (long *)*param_1;
        uVar7 = uVar7 + 1;
      }
    }
    break;
  case 3:
    lVar4 = ((long *)*param_2)[1];
    *plVar6 = *(long *)*param_2;
    plVar1[3] = lVar4;
    plVar1 = (long *)*param_1;
    plVar6 = plVar1 + 2;
    *param_1 = (long)plVar6;
    puVar5 = (undefined8 *)*plVar1;
    *plVar1 = (long)plVar6;
    if (plVar1[1] != 0) {
      uVar7 = 1;
      while( true ) {
        uVar3 = puVar5[1];
        *plVar6 = *puVar5;
        plVar6[1] = uVar3;
        plVar6 = (long *)*param_1;
        *param_1 = (long)(plVar6 + 2);
        puVar5 = (undefined8 *)*plVar6;
        *plVar6 = (long)(plVar6 + 2);
        json_extract_copy_value(param_1,puVar5);
        puVar5 = (undefined8 *)plVar6[1];
        if (puVar5 != (undefined8 *)0x0) {
          plVar6[1] = *param_1;
        }
        if ((ulong)plVar1[1] <= uVar7) break;
        plVar6 = (long *)*param_1;
        uVar7 = uVar7 + 1;
      }
    }
  }
  return;
}


