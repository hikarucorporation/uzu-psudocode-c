// Function : garray_dofo
// Namespace: 
// Entry    : 004fc690
// Prototype: undefined garray_dofo(undefined8 param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, long param_10, ulong param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 004fc690 - 004fce14


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void garray_dofo(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                double param_6,double param_7,undefined8 param_8,long param_9,long param_10,
                ulong param_11,int *param_12,char *param_13,ulong param_14)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  ulong extraout_RDX;
  int *piVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  int iVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  int iVar18;
  double dVar17;
  undefined8 extraout_XMM0_Qa_04;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 uVar22;
  int *in_stack_fffffffffffffed8;
  double local_d8;
  double dStack_d0;
  int local_c0;
  int local_bc;
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  ulong local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  ulong local_40;
  char local_38 [8];
  
  puVar5 = (uint *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13,param_14);
  lVar6 = template_findbyname(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,*(long *)(puVar5 + 4));
  puVar7 = gensym("y");
  piVar9 = &local_c0;
  pcVar14 = local_38;
  uVar8 = template_find_field(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,lVar6,(long)puVar7,&local_bc,piVar9,pcVar14,param_14);
  if (((int)uVar8 == 0) || (local_c0 != 0)) {
    pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "%s: needs floating-point \'y\' field",**(undefined8 **)(param_9 + 0x28),piVar9,pcVar14
             ,param_14);
  }
  else {
    uVar4 = (uint)param_11;
    piVar9 = (int *)(long)local_bc;
    lVar10 = (long)(int)puVar5[1];
    lVar6 = 0x1000;
    if (param_10 != 0) {
      lVar6 = param_10;
    }
    uVar3 = ilog2((uint)lVar6);
    piVar11 = (int *)(ulong)uVar3;
    uVar3 = 1 << ((byte)uVar3 & 0x1f);
    uVar15 = (ulong)uVar3;
    uVar8 = extraout_XMM0_Qa_02;
    if (lVar6 != (int)uVar3) {
      uVar3 = ilog2((uint)lVar6);
      piVar11 = (int *)(ulong)uVar3;
      lVar6 = (long)(1 << ((byte)uVar3 & 0x1f));
      uVar8 = post(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "%s: rounding to %d points");
      uVar15 = extraout_RDX;
    }
    local_48 = param_9;
    garray_resize_long(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       lVar6 + 3,uVar15,piVar11,pcVar14,param_14);
    uVar3 = *puVar5;
    uVar15 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      param_2 = DAT_00651f70 / (double)lVar6;
      in_stack_fffffffffffffed8 = *(int **)(puVar5 + 2);
      piVar11 = piVar9;
      local_a8 = param_2;
      local_a0 = uVar15;
      if ((int)param_13 == 0) {
        if ((int)uVar4 < 1) {
          uVar13 = (ulong)(uVar3 & 3);
          if (uVar15 - 1 < 3) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar12 = in_stack_fffffffffffffed8 + (long)piVar9;
            piVar11 = (int *)0x0;
            do {
              *piVar12 = 0;
              *(undefined4 *)((long)piVar12 + lVar10) = 0;
              *(undefined4 *)((long)piVar12 + lVar10 * 2) = 0;
              *(undefined4 *)((long)piVar12 + lVar10 * 3) = 0;
              piVar11 = piVar11 + 1;
              piVar12 = piVar12 + lVar10;
            } while ((int *)(ulong)(uVar3 & 0xfffffffc) != piVar11);
          }
          if (uVar13 != 0) {
            piVar11 = (int *)((long)in_stack_fffffffffffffed8 +
                             (long)piVar11 * lVar10 + (long)piVar9 * 4);
            do {
              *piVar11 = 0;
              piVar11 = (int *)((long)piVar11 + lVar10);
              uVar13 = uVar13 - 1;
              in_stack_fffffffffffffed8 = piVar11;
            } while (uVar13 != 0);
          }
        }
        else {
          uVar15 = 0;
          do {
            local_b8 = (double)(int)uVar15 * local_a8;
            uStack_b0 = 0;
            if (3 < uVar4) {
              local_d8 = 0.0;
              dStack_d0 = 0.0;
              uVar13 = 0;
              dVar17 = 0.0;
              dVar20 = 0.0;
              iVar16 = _DAT_00651f90;
              iVar18 = _UNK_00651f94;
              local_98 = local_b8;
              dStack_90 = local_b8;
              do {
                uVar8 = *(undefined8 *)((long)param_12 + uVar13);
                uVar2 = *(undefined8 *)((long)param_12 + uVar13 + 8);
                local_68 = (double)(float)uVar2;
                dStack_60 = (double)(float)((ulong)uVar2 >> 0x20);
                local_88 = (double)iVar16 * local_98;
                dStack_80 = (double)iVar18 * dStack_90;
                dVar19 = (double)(iVar16 + _DAT_00651fa0) * local_98;
                dVar21 = (double)(iVar18 + _UNK_00651fa4) * dStack_90;
                local_58 = dVar17;
                dStack_50 = dVar20;
                local_78 = cos(local_88);
                dVar17 = cos(dStack_80);
                local_d8 = local_d8 + local_78 * (double)(float)uVar8;
                dStack_d0 = dStack_d0 + dVar17 * (double)(float)((ulong)uVar8 >> 0x20);
                dVar17 = cos(dVar19);
                dVar20 = cos(dVar21);
                param_2 = dVar17 * local_68;
                dVar17 = local_58 + param_2;
                dVar20 = dStack_50 + dVar20 * dStack_60;
                iVar16 = iVar16 + _DAT_00651fd0;
                iVar18 = iVar18 + _UNK_00651fd4;
                uVar13 = uVar13 + 0x10;
              } while (((param_11 & 0xffffffff) * 4 & 0xfffffffffffffff0) != uVar13);
              dVar17 = dVar20 + dStack_d0 + dVar17 + local_d8;
              uVar13 = (ulong)(uVar4 & 0xfffffffc);
              param_3 = local_b8;
              goto joined_r0x004fcc26;
            }
            dVar17 = 0.0;
            uVar13 = 0;
            do {
              fVar1 = (float)param_12[uVar13];
              dVar20 = cos((double)(int)uVar13 * local_b8);
              param_2 = dVar17 + dVar20 * (double)fVar1;
              uVar13 = uVar13 + 1;
              dVar17 = param_2;
              param_3 = local_b8;
joined_r0x004fcc26:
              local_b8 = param_3;
            } while (uVar13 != (param_11 & 0xffffffff));
            *(float *)((long)in_stack_fffffffffffffed8 + (long)piVar9 * 4 + uVar15 * lVar10) =
                 (float)dVar17;
            uVar15 = uVar15 + 1;
          } while (uVar15 != local_a0);
        }
      }
      else if ((int)uVar4 < 1) {
        uVar13 = (ulong)(uVar3 & 3);
        if (uVar15 - 1 < 3) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar12 = in_stack_fffffffffffffed8 + (long)piVar9;
          piVar11 = (int *)0x0;
          do {
            *piVar12 = 0;
            *(undefined4 *)((long)piVar12 + lVar10) = 0;
            *(undefined4 *)((long)piVar12 + lVar10 * 2) = 0;
            *(undefined4 *)((long)piVar12 + lVar10 * 3) = 0;
            piVar11 = piVar11 + 1;
            piVar12 = piVar12 + lVar10;
          } while ((int *)(ulong)(uVar3 & 0xfffffffc) != piVar11);
        }
        if (uVar13 != 0) {
          piVar11 = (int *)((long)in_stack_fffffffffffffed8 +
                           (long)piVar11 * lVar10 + (long)piVar9 * 4);
          do {
            *piVar11 = 0;
            piVar11 = (int *)((long)piVar11 + lVar10);
            uVar13 = uVar13 - 1;
            in_stack_fffffffffffffed8 = piVar11;
          } while (uVar13 != 0);
        }
      }
      else {
        local_40 = (ulong)(uVar4 & 0xfffffffc);
        uVar15 = 0;
        dVar17 = _DAT_005d9000;
        do {
          param_2 = dVar17;
          local_b8 = (double)(int)uVar15 * local_a8;
          uStack_b0 = 0;
          if (3 < uVar4) {
            local_d8 = 0.0;
            dStack_d0 = 0.0;
            uVar13 = 0;
            dVar17 = 0.0;
            dVar20 = 0.0;
            iVar16 = _DAT_00651f90;
            iVar18 = _UNK_00651f94;
            local_98 = local_b8;
            dStack_90 = local_b8;
            do {
              uVar8 = *(undefined8 *)((long)param_12 + uVar13);
              uVar2 = *(undefined8 *)((long)param_12 + uVar13 + 8);
              local_68 = (double)(float)uVar2;
              dStack_60 = (double)(float)((ulong)uVar2 >> 0x20);
              local_88 = ((double)iVar16 + _DAT_00651e80) * local_98;
              dStack_80 = ((double)iVar18 + _UNK_00651e88) * dStack_90;
              dVar19 = ((double)(iVar16 + _DAT_00651fa0) + _DAT_00651e80) * local_98;
              dVar21 = ((double)(iVar18 + _UNK_00651fa4) + _UNK_00651e88) * dStack_90;
              local_58 = dVar17;
              dStack_50 = dVar20;
              local_78 = sin(local_88);
              dVar17 = sin(dStack_80);
              local_d8 = local_d8 + local_78 * (double)(float)uVar8;
              dStack_d0 = dStack_d0 + dVar17 * (double)(float)((ulong)uVar8 >> 0x20);
              dVar17 = sin(dVar19);
              dVar20 = sin(dVar21);
              dVar17 = local_58 + dVar17 * local_68;
              dVar20 = dStack_50 + dVar20 * dStack_60;
              iVar16 = iVar16 + _DAT_00651fd0;
              iVar18 = iVar18 + _UNK_00651fd4;
              uVar13 = uVar13 + 0x10;
            } while (((param_11 & 0xffffffff) * 4 & 0xfffffffffffffff0) != uVar13);
            param_3 = dVar20 + dStack_d0 + dVar17 + local_d8;
            param_2 = _DAT_005d9000;
            param_4 = local_b8;
            uVar13 = local_40;
            goto joined_r0x004fc9cc;
          }
          param_3 = 0.0;
          uVar13 = 0;
          do {
            fVar1 = (float)param_12[uVar13];
            dVar17 = sin(((double)(int)uVar13 + param_2) * local_b8);
            param_3 = param_3 + dVar17 * (double)fVar1;
            uVar13 = uVar13 + 1;
            param_2 = _DAT_005d9000;
            param_4 = local_b8;
joined_r0x004fc9cc:
            _DAT_005d9000 = param_2;
            local_b8 = param_4;
          } while (uVar13 != (param_11 & 0xffffffff));
          *(float *)((long)in_stack_fffffffffffffed8 + (long)piVar9 * 4 + uVar15 * lVar10) =
               (float)param_3;
          uVar15 = uVar15 + 1;
          dVar17 = param_2;
        } while (uVar15 != local_a0);
      }
    }
    lVar6 = local_48;
    uVar22 = SUB81(in_stack_fffffffffffffed8,0);
    uVar4 = glist_isvisible(*(long *)(local_48 + 0x18));
    if (uVar4 == 0) {
      if ((*(byte *)(lVar6 + 0x30) & 8) != 0) {
        pdgui_vmess(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    0x653aa2,"s",**(undefined8 **)(lVar6 + 0x28),piVar11,pcVar14,param_14,uVar22);
      }
    }
    else {
      sys_queuegui(lVar6,*(long *)(lVar6 + 0x18),0x4fa9e0);
    }
  }
  return;
}


