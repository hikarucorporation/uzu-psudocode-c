// Function : drawnumber_key
// Namespace: 
// Entry    : 00527840
// Prototype: undefined drawnumber_key(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 00527840 - 00527d53


void drawnumber_key(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined7 extraout_var;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  uint *in_R8;
  uint *in_R9;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa_02;
  double dVar18;
  undefined1 in_stack_fffffffffffffba8;
  double local_448;
  int local_440 [2];
  undefined8 *local_438;
  undefined8 local_430 [2];
  char acStack_419 [1000];
  undefined1 local_31;
  
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar16 = 0;
  bVar2 = gpointer_check((long *)(*(long *)(*(long *)(*plVar3 + 0x48) + 8) + 0xf0),0);
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    pcVar12 = "drawnumber_motion: scalar disappeared";
    uVar16 = extraout_XMM0_Qa;
LAB_00527923:
    post(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar12);
    return;
  }
  iVar10 = (int)param_1;
  if (iVar10 == 0) {
    return;
  }
  plVar3 = (long *)__tls_get_addr();
  lVar5 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
  if (*(int *)(lVar5 + 0x108) != 0) {
    if (*(int *)(lVar5 + 0x108) == 1) {
      if (*(int *)(lVar5 + 0x10c) == 0) {
        lVar1 = *(long *)(lVar5 + 0xe8);
        puVar14 = *(undefined8 **)(param_9 + 0x30);
        puVar9 = (undefined8 *)(*plVar3 + 0x168);
        if (lVar1 == 0) {
          uVar16 = bug(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       "template_find_field",uVar16,extraout_RDX,1,(char *)in_R8,in_R9,
                       in_stack_fffffffffffffba8);
        }
        else {
          uVar16 = extraout_XMM0_Qa_00;
          if (0 < (int)*(uint *)(lVar1 + 0x18)) {
            plVar3 = (long *)(*(long *)(lVar1 + 0x20) + 8);
            lVar11 = 0;
            do {
              if ((undefined8 *)*plVar3 == puVar14) {
                if ((int)plVar3[-1] != 1) {
                  uVar17 = **(undefined8 **)(lVar1 + 0x10);
                  uVar6 = *puVar14;
                  pcVar12 = "%s.%s: not a symbol";
                  goto LAB_00527a08;
                }
                puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0xe0) + (long)(int)lVar11);
                goto LAB_00527a11;
              }
              lVar11 = lVar11 + 8;
              plVar3 = plVar3 + 3;
            } while ((ulong)*(uint *)(lVar1 + 0x18) * 8 != lVar11);
          }
        }
        uVar17 = **(undefined8 **)(lVar1 + 0x10);
        uVar6 = *puVar14;
        pcVar12 = "%s.%s: no such field";
LAB_00527a08:
        pd_error(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar12,uVar17,
                 uVar6,(char *)in_R8,in_R9);
LAB_00527a11:
        strncpy(acStack_419 + 1,(char *)*puVar9,1000);
      }
      else {
        acStack_419[1] = '\0';
      }
      if (iVar10 != 8) {
        local_31 = 0;
        pcVar12 = acStack_419 + 1;
        sVar4 = strlen(pcVar12);
        pcVar12[sVar4 + 1] = '\0';
        sVar4 = strlen(pcVar12);
        acStack_419[sVar4 + 1] = (char)iVar10;
        return;
      }
      local_31 = 0;
      if (acStack_419[1] == '\0') {
        return;
      }
      sVar4 = strlen(acStack_419 + 1);
      (acStack_419 + 1)[sVar4 - 1] = '\0';
      return;
    }
    pcVar12 = "typing at text fields not yet implemented";
    uVar16 = extraout_XMM0_Qa_00;
    goto LAB_00527923;
  }
  if (*(int *)(lVar5 + 0x10c) == 0) {
    lVar1 = *(long *)(lVar5 + 0xe8);
    puVar14 = *(undefined8 **)(param_9 + 0x30);
    if (lVar1 == 0) {
      uVar16 = bug(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "template_find_field",uVar16,extraout_RDX,0,(char *)in_R8,in_R9,
                   in_stack_fffffffffffffba8);
    }
    else {
      uVar16 = extraout_XMM0_Qa_00;
      if (0 < (int)*(uint *)(lVar1 + 0x18)) {
        plVar3 = (long *)(*(long *)(lVar1 + 0x20) + 8);
        lVar11 = 0;
        do {
          if ((undefined8 *)*plVar3 == puVar14) {
            if ((int)plVar3[-1] == 0) {
              dVar18 = (double)*(float *)(*(long *)(lVar5 + 0xe0) + (long)(int)lVar11);
              goto LAB_00527a83;
            }
            uVar17 = **(undefined8 **)(lVar1 + 0x10);
            uVar6 = *puVar14;
            pcVar12 = "%s.%s: not a number";
            goto LAB_00527a77;
          }
          lVar11 = lVar11 + 8;
          plVar3 = plVar3 + 3;
        } while ((ulong)*(uint *)(lVar1 + 0x18) * 8 != lVar11);
      }
    }
    uVar17 = **(undefined8 **)(lVar1 + 0x10);
    uVar6 = *puVar14;
    pcVar12 = "%s.%s: no such field";
LAB_00527a77:
    pd_error(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar12,uVar17,uVar6,
             (char *)in_R8,in_R9);
    dVar18 = 0.0;
LAB_00527a83:
    sprintf(acStack_419 + 1,"%g",dVar18);
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar5 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
  }
  else {
    acStack_419[1] = '\0';
  }
  uVar7 = (ulong)(iVar10 == 10);
  *(uint *)(lVar5 + 0x10c) = (uint)(iVar10 == 10);
  if (iVar10 == 8) {
    if (acStack_419[1] == '\0') goto LAB_00527afd;
    sVar4 = strlen(acStack_419 + 1);
    sVar4 = sVar4 - 1;
    iVar10 = 0;
  }
  else {
    pcVar12 = acStack_419 + 1;
    sVar4 = strlen(pcVar12);
    pcVar12[sVar4 + 1] = '\0';
    sVar4 = strlen(pcVar12);
  }
  acStack_419[sVar4 + 1] = (char)iVar10;
LAB_00527afd:
  puVar13 = &DAT_00655762;
  iVar10 = __isoc99_sscanf(acStack_419 + 1,&DAT_00655762,&local_448);
  if (iVar10 < 1) {
    local_448 = 0.0;
    fVar15 = 0.0;
  }
  else {
    fVar15 = (float)local_448;
  }
  plVar3 = (long *)__tls_get_addr();
  lVar5 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
  lVar1 = *(long *)(lVar5 + 0xe8);
  puVar14 = *(undefined8 **)(param_9 + 0x30);
  if (lVar1 == 0) {
    uVar16 = bug(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "template_find_field",puVar13,extraout_RDX_00,uVar7,(char *)in_R8,in_R9,
                 in_stack_fffffffffffffba8);
  }
  else {
    uVar16 = extraout_XMM0_Qa_01;
    if (0 < (int)*(uint *)(lVar1 + 0x18)) {
      puVar9 = (undefined8 *)(*(long *)(lVar1 + 0x20) + 8);
      lVar11 = 0;
      do {
        if ((undefined8 *)*puVar9 == puVar14) {
          if (*(int *)(puVar9 + -1) == 0) {
            piVar8 = (int *)(long)(int)lVar11;
            *(float *)(*(long *)(lVar5 + 0xe0) + (long)piVar8) = fVar15;
            goto LAB_00527bc0;
          }
          uVar17 = **(undefined8 **)(lVar1 + 0x10);
          piVar8 = (int *)*puVar14;
          pcVar12 = "%s.%s: not a number";
          goto LAB_00527bb7;
        }
        lVar11 = lVar11 + 8;
        puVar9 = puVar9 + 3;
      } while ((ulong)*(uint *)(lVar1 + 0x18) * 8 != lVar11);
    }
  }
  uVar17 = **(undefined8 **)(lVar1 + 0x10);
  piVar8 = (int *)*puVar14;
  pcVar12 = "%s.%s: no such field";
LAB_00527bb7:
  pd_error(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar12,uVar17,piVar8,
           (char *)in_R8,in_R9);
LAB_00527bc0:
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar5 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
  lVar1 = *(long *)(lVar5 + 0xd0);
  if (lVar1 != 0) {
    puVar14 = *(undefined8 **)(lVar5 + 200);
    lVar5 = *(long *)(lVar5 + 0xe8);
    puVar9 = gensym("change");
    uVar16 = gpointer_init(local_430);
    uVar17 = gpointer_setglist(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               local_430,(long)puVar14,lVar1,piVar8,(char *)in_R8,in_R9);
    local_440[0] = 3;
    lVar5 = *(long *)(lVar5 + 8);
    uVar16 = extraout_RDX_01;
    local_438 = local_430;
    if (lVar5 != 0) {
      piVar8 = local_440;
      outlet_anything(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long **)(lVar5 + 0x18),puVar9,1,piVar8,in_R8,in_R9);
      uVar16 = extraout_RDX_02;
      puVar14 = puVar9;
      uVar17 = extraout_XMM0_Qa_02;
    }
    gpointer_unset(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)local_430,
                   puVar14,uVar16,piVar8,(char *)in_R8,in_R9);
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar5 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
    if (*(long *)(lVar5 + 0xd0) != 0) {
      scalar_redraw(*(long *)(lVar5 + 0xd0),*(long *)(lVar5 + 200));
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar5 = *(long *)(*(long *)(*plVar3 + 0x48) + 8);
    }
  }
  if (*(long *)(lVar5 + 0xd8) != 0) {
    array_redraw(*(long *)(lVar5 + 0xd8),*(long *)(lVar5 + 200));
  }
  return;
}


