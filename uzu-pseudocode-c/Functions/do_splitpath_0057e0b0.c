// Function : do_splitpath
// Namespace: 
// Entry    : 0057e0b0
// Prototype: undefined8 * do_splitpath(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, uint * param_10, undefined8 * param_11)
// Body     : 0057e0b0 - 0057e2b0


undefined8 *
do_splitpath(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            char *param_9,uint *param_10,undefined8 *param_11)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  char *__s;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar11;
  char local_418;
  char local_417 [998];
  undefined1 local_31;
  
  puVar1 = gensym("/");
  __s = &local_418;
  sys_unbashfilename(param_9,__s);
  local_31 = 0;
  if (local_418 == '\0') {
    uVar9 = 1;
  }
  else {
    pcVar2 = local_417;
    uVar9 = 1;
    cVar6 = local_418;
    do {
      uVar9 = uVar9 + (cVar6 == '/');
      cVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar6 != '\0');
  }
  puVar3 = getbytes((ulong)uVar9 << 4);
  bVar10 = local_418 == '/';
  if (bVar10) {
    *puVar3 = 2;
    *(undefined8 **)(puVar3 + 2) = puVar1;
  }
  uVar7 = (uint)bVar10;
  uVar11 = extraout_XMM0_Qa;
  if (local_418 != '\0') {
    __s = &local_418;
    uVar8 = (ulong)bVar10;
    cVar6 = local_418;
    do {
      while (cVar6 == '/') {
        pcVar2 = __s + 1;
        __s = __s + 1;
        cVar6 = *pcVar2;
      }
      pcVar2 = strchr(__s,0x2f);
      if (pcVar2 == (char *)0x0) {
        uVar11 = extraout_XMM0_Qa_00;
        if (cVar6 == '\0') goto LAB_0057e23d;
        puVar3[(uVar8 & 0xffffffff) * 4] = 2;
        puVar4 = gensym(__s);
        *(undefined8 **)(puVar3 + (uVar8 & 0xffffffff) * 4 + 2) = puVar4;
        uVar7 = (int)uVar8 + 1;
        uVar11 = extraout_XMM0_Qa_02;
        goto joined_r0x0057e239;
      }
      *pcVar2 = '\0';
      puVar3[uVar8 * 4] = 2;
      puVar4 = gensym(__s);
      *(undefined8 **)(puVar3 + uVar8 * 4 + 2) = puVar4;
      uVar8 = uVar8 + 1;
      __s = pcVar2 + 1;
      cVar6 = pcVar2[1];
    } while (cVar6 != '\0');
    uVar11 = extraout_XMM0_Qa_01;
LAB_0057e23d:
    uVar7 = (uint)uVar8;
  }
joined_r0x0057e239:
  puVar5 = puVar3;
  if ((uVar7 != uVar9) &&
     (puVar5 = resizebytes(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar3,
                           (ulong)uVar9 << 4,(long)(int)uVar7 << 4), uVar9 = uVar7,
     puVar5 == (undefined4 *)0x0)) {
    freebytes(puVar3);
    uVar9 = 0;
  }
  *param_10 = uVar9;
  *param_11 = puVar5;
  puVar4 = (undefined8 *)0x0;
  if (*__s == '\0') {
    puVar4 = puVar1;
  }
  return puVar4;
}


