// Function : tryVst2StateLoad
// Namespace: VST3
// Entry    : 0018e880
// Prototype: VST3 * tryVst2StateLoad(VST3 * this, ByteOrderStream<1u> * param_1, uint * param_2, undefined8 param_3, ulong param_4, undefined8 param_5)
// Body     : 0018e880 - 0018f377


/* WARNING: Type propagation algorithm not settling */
/* VST3::tryVst2StateLoad(Steinberg::IBStream&, VST3::Optional<int>) */

VST3 * __thiscall
VST3::tryVst2StateLoad
          (VST3 *this,ByteOrderStream<1u> *param_1,uint *param_2,undefined8 param_3,ulong param_4,
          undefined8 param_5)

{
  Vst2xProgram *pVVar1;
  Vst2xProgram *pVVar2;
  Vst2xProgram *pVVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined8 uVar9;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 local_94;
  undefined1 local_90 [3];
  undefined1 uStack_8d;
  undefined1 local_8c [3];
  undefined1 uStack_89;
  undefined1 local_88 [3];
  undefined1 uStack_85;
  undefined1 local_84 [3];
  undefined1 auStack_81 [9];
  uint local_78;
  uint local_74;
  int local_70;
  undefined4 local_6c;
  Vst2xProgram *local_68;
  Vst2xProgram *pVStack_60;
  undefined8 local_58;
  void *pvStack_50;
  undefined8 uStack_48;
  undefined5 local_40;
  undefined3 uStack_3b;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_3b = 0;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = (Vst2xProgram *)0x0;
  pVStack_60 = (Vst2xProgram *)0x0;
  local_94 = 0;
                    /* try { // try from 0018e8b8 to 0018e8cf has its CatchHandler @ 0018f3c7 */
  puVar16 = (undefined4 *)local_90;
  iVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1,puVar16,4);
  uVar14 = 0;
  if (iVar8 == 0) {
    uVar14 = local_94;
  }
  if (1 < uVar14) {
    uVar10 = (ulong)(int)uVar14;
    param_4 = uVar10 - 2;
    uVar14 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
    if ((uVar14 & 3) == 0) {
      puVar12 = (undefined1 *)((long)local_90 + uVar10 + 0xffffffffffffffff);
    }
    else {
      lVar4 = uVar10 - 1;
      lVar5 = 0;
      do {
        lVar15 = lVar5;
        lVar11 = lVar4;
        uVar7 = *(undefined1 *)((long)local_90 + lVar15);
        *(undefined1 *)((long)local_90 + lVar15) = *(undefined1 *)((long)local_90 + lVar11);
        *(undefined1 *)((long)local_90 + lVar11) = uVar7;
        lVar4 = lVar11 + -2;
        lVar5 = lVar15 + 2;
      } while (((ulong)uVar14 & 3) * 2 != lVar15 + 2);
      puVar12 = (undefined1 *)((long)local_90 + lVar11 + 0xfffffffffffffffeU);
      uVar10 = lVar11 - 1;
      puVar16 = (undefined4 *)((long)local_90 + lVar15 + 2);
    }
    if (5 < param_4) {
      do {
        uVar7 = *(undefined1 *)puVar16;
        *(undefined1 *)puVar16 = *puVar12;
        *puVar12 = uVar7;
        uVar7 = *(undefined1 *)((long)puVar16 + 2);
        *(undefined1 *)((long)puVar16 + 2) = puVar12[-2];
        puVar12[-2] = uVar7;
        uVar7 = *(undefined1 *)(puVar16 + 1);
        *(undefined1 *)(puVar16 + 1) = puVar12[-4];
        puVar12[-4] = uVar7;
        uVar7 = *(undefined1 *)((long)puVar16 + 6);
        *(undefined1 *)((long)puVar16 + 6) = puVar12[-6];
        puVar12[-6] = uVar7;
        uVar10 = uVar10 - 8;
        puVar16 = puVar16 + 2;
        puVar12 = puVar12 + -8;
      } while (1 < uVar10);
    }
  }
  if (iVar8 == 0) {
    if (_local_90 == 0x56737457) {
      local_94 = 0;
                    /* try { // try from 0018ea5e to 0018ea75 has its CatchHandler @ 0018f3bf */
      puVar12 = (undefined1 *)((long)auStack_81 + 1);
      iVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1,puVar12,4);
      uVar14 = 0;
      if (iVar8 == 0) {
        uVar14 = local_94;
      }
      if (1 < uVar14) {
        uVar10 = (ulong)(int)uVar14;
        param_4 = uVar10 - 2;
        uVar14 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
        if ((uVar14 & 3) == 0) {
          puVar13 = (undefined1 *)((long)auStack_81 + uVar10);
        }
        else {
          lVar4 = uVar10 - 1;
          lVar5 = 0;
          do {
            lVar15 = lVar5;
            lVar11 = lVar4;
            uVar7 = *(undefined1 *)((long)auStack_81 + lVar15 + 1U);
            *(undefined1 *)((long)auStack_81 + lVar15 + 1U) =
                 *(undefined1 *)((long)auStack_81 + lVar11 + 1U);
            *(undefined1 *)((long)auStack_81 + lVar11 + 1U) = uVar7;
            lVar4 = lVar11 + -2;
            lVar5 = lVar15 + 2;
          } while (((ulong)uVar14 & 3) * 2 != lVar15 + 2);
          puVar13 = (undefined1 *)((long)local_84 + lVar11 + 2);
          uVar10 = lVar11 - 1;
          puVar12 = (undefined1 *)((long)auStack_81 + lVar15 + 3U);
        }
        if (5 < param_4) {
          do {
            uVar7 = *puVar12;
            *puVar12 = *puVar13;
            *puVar13 = uVar7;
            uVar7 = puVar12[2];
            puVar12[2] = puVar13[-2];
            puVar13[-2] = uVar7;
            uVar7 = puVar12[4];
            puVar12[4] = puVar13[-4];
            puVar13[-4] = uVar7;
            uVar7 = puVar12[6];
            puVar12[6] = puVar13[-6];
            puVar13[-6] = uVar7;
            uVar10 = uVar10 - 8;
            puVar12 = puVar12 + 8;
            puVar13 = puVar13 + -8;
          } while (1 < uVar10);
        }
      }
      if (iVar8 == 0) {
        local_94 = 0;
                    /* try { // try from 0018eb57 to 0018eb6e has its CatchHandler @ 0018f3af */
        puVar12 = (undefined1 *)((long)auStack_81 + 5);
        iVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1,puVar12,4);
        uVar14 = 0;
        if (iVar8 == 0) {
          uVar14 = local_94;
        }
        if (1 < uVar14) {
          uVar10 = (ulong)(int)uVar14;
          param_4 = uVar10 - 2;
          uVar14 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
          if ((uVar14 & 3) == 0) {
            puVar13 = (undefined1 *)((long)auStack_81 + uVar10 + 4);
          }
          else {
            lVar4 = uVar10 - 1;
            lVar5 = 0;
            do {
              lVar15 = lVar5;
              lVar11 = lVar4;
              uVar7 = *(undefined1 *)((long)auStack_81 + lVar15 + 5U);
              *(undefined1 *)((long)auStack_81 + lVar15 + 5U) =
                   *(undefined1 *)((long)auStack_81 + lVar11 + 5U);
              *(undefined1 *)((long)auStack_81 + lVar11 + 5U) = uVar7;
              lVar4 = lVar11 + -2;
              lVar5 = lVar15 + 2;
            } while (((ulong)uVar14 & 3) * 2 != lVar15 + 2);
            puVar13 = (undefined1 *)((long)auStack_81 + lVar11 + 3U);
            uVar10 = lVar11 - 1;
            puVar12 = (undefined1 *)((long)auStack_81 + lVar15 + 7U);
          }
          if (5 < param_4) {
            do {
              uVar7 = *puVar12;
              *puVar12 = *puVar13;
              *puVar13 = uVar7;
              uVar7 = puVar12[2];
              puVar12[2] = puVar13[-2];
              puVar13[-2] = uVar7;
              uVar7 = puVar12[4];
              puVar12[4] = puVar13[-4];
              puVar13[-4] = uVar7;
              uVar7 = puVar12[6];
              puVar12[6] = puVar13[-6];
              puVar13[-6] = uVar7;
              uVar10 = uVar10 - 8;
              puVar12 = puVar12 + 8;
              puVar13 = puVar13 + -8;
            } while (1 < uVar10);
          }
        }
        if (iVar8 == 0) {
          local_94 = 0;
                    /* try { // try from 0018ec87 to 0018ec9e has its CatchHandler @ 0018f39f */
          puVar16 = (undefined4 *)local_8c;
          iVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1,puVar16,4);
          uVar14 = 0;
          if (iVar8 == 0) {
            uVar14 = local_94;
          }
          if (1 < uVar14) {
            uVar10 = (ulong)(int)uVar14;
            param_4 = uVar10 - 2;
            uVar14 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
            if ((uVar14 & 3) == 0) {
              puVar12 = (undefined1 *)((long)local_90 + uVar10 + 3);
            }
            else {
              lVar4 = uVar10 - 1;
              lVar5 = 0;
              do {
                lVar15 = lVar5;
                lVar11 = lVar4;
                uVar7 = *(undefined1 *)((long)local_8c + lVar15);
                *(undefined1 *)((long)local_8c + lVar15) = *(undefined1 *)((long)local_8c + lVar11);
                *(undefined1 *)((long)local_8c + lVar11) = uVar7;
                lVar4 = lVar11 + -2;
                lVar5 = lVar15 + 2;
              } while (((ulong)uVar14 & 3) * 2 != lVar15 + 2);
              puVar12 = (undefined1 *)((long)local_90 + lVar11 + 2);
              uVar10 = lVar11 - 1;
              puVar16 = (undefined4 *)((long)local_8c + lVar15 + 2);
            }
            if (5 < param_4) {
              do {
                uVar7 = *(undefined1 *)puVar16;
                *(undefined1 *)puVar16 = *puVar12;
                *puVar12 = uVar7;
                uVar7 = *(undefined1 *)((long)puVar16 + 2);
                *(undefined1 *)((long)puVar16 + 2) = puVar12[-2];
                puVar12[-2] = uVar7;
                uVar7 = *(undefined1 *)(puVar16 + 1);
                *(undefined1 *)(puVar16 + 1) = puVar12[-4];
                puVar12[-4] = uVar7;
                uVar7 = *(undefined1 *)((long)puVar16 + 6);
                *(undefined1 *)((long)puVar16 + 6) = puVar12[-6];
                puVar12[-6] = uVar7;
                uVar10 = uVar10 - 8;
                puVar16 = puVar16 + 2;
                puVar12 = puVar12 + -8;
              } while (1 < uVar10);
            }
          }
          if (iVar8 == 0) {
            uStack_2c = _local_8c != 0;
            local_94 = 0;
                    /* try { // try from 0018ed91 to 0018eda8 has its CatchHandler @ 0018f397 */
            puVar16 = (undefined4 *)local_90;
            iVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1,puVar16,4);
            uVar14 = 0;
            if (iVar8 == 0) {
              uVar14 = local_94;
            }
            if (1 < uVar14) {
              uVar10 = (ulong)(int)uVar14;
              param_4 = uVar10 - 2;
              uVar14 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
              if ((uVar14 & 3) == 0) {
                puVar12 = (undefined1 *)((long)local_90 + uVar10 + 0xffffffffffffffff);
              }
              else {
                lVar4 = uVar10 - 1;
                lVar5 = 0;
                do {
                  lVar15 = lVar5;
                  lVar11 = lVar4;
                  uVar7 = *(undefined1 *)((long)local_90 + lVar15);
                  *(undefined1 *)((long)local_90 + lVar15) =
                       *(undefined1 *)((long)local_90 + lVar11);
                  *(undefined1 *)((long)local_90 + lVar11) = uVar7;
                  lVar4 = lVar11 + -2;
                  lVar5 = lVar15 + 2;
                } while (((ulong)uVar14 & 3) * 2 != lVar15 + 2);
                puVar12 = (undefined1 *)((long)local_90 + lVar11 + 0xfffffffffffffffeU);
                uVar10 = lVar11 - 1;
                puVar16 = (undefined4 *)((long)local_90 + lVar15 + 2);
              }
              if (5 < param_4) {
                do {
                  uVar7 = *(undefined1 *)puVar16;
                  *(undefined1 *)puVar16 = *puVar12;
                  *puVar12 = uVar7;
                  uVar7 = *(undefined1 *)((long)puVar16 + 2);
                  *(undefined1 *)((long)puVar16 + 2) = puVar12[-2];
                  puVar12[-2] = uVar7;
                  uVar7 = *(undefined1 *)(puVar16 + 1);
                  *(undefined1 *)(puVar16 + 1) = puVar12[-4];
                  puVar12[-4] = uVar7;
                  uVar7 = *(undefined1 *)((long)puVar16 + 6);
                  *(undefined1 *)((long)puVar16 + 6) = puVar12[-6];
                  puVar12[-6] = uVar7;
                  uVar10 = uVar10 - 8;
                  puVar16 = puVar16 + 2;
                  puVar12 = puVar12 + -8;
                } while (1 < uVar10);
              }
            }
            if (iVar8 == 0) goto LAB_0018ee7d;
          }
        }
      }
    }
    else {
LAB_0018ee7d:
      if (_local_90 == 0x43636e4b) {
        local_94 = 0;
                    /* try { // try from 0018ee93 to 0018eeaa has its CatchHandler @ 0018f3b7 */
        puVar16 = (undefined4 *)local_8c;
        iVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1,puVar16,4);
        uVar14 = 0;
        if (iVar8 == 0) {
          uVar14 = local_94;
        }
        if (1 < uVar14) {
          uVar10 = (ulong)(int)uVar14;
          param_4 = uVar10 - 2;
          uVar14 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
          if ((uVar14 & 3) == 0) {
            puVar12 = (undefined1 *)((long)local_90 + uVar10 + 3);
          }
          else {
            lVar4 = uVar10 - 1;
            lVar5 = 0;
            do {
              lVar15 = lVar5;
              lVar11 = lVar4;
              uVar7 = *(undefined1 *)((long)local_8c + lVar15);
              *(undefined1 *)((long)local_8c + lVar15) = *(undefined1 *)((long)local_8c + lVar11);
              *(undefined1 *)((long)local_8c + lVar11) = uVar7;
              lVar4 = lVar11 + -2;
              lVar5 = lVar15 + 2;
            } while (((ulong)uVar14 & 3) * 2 != lVar15 + 2);
            puVar12 = (undefined1 *)((long)local_90 + lVar11 + 2);
            uVar10 = lVar11 - 1;
            puVar16 = (undefined4 *)((long)local_8c + lVar15 + 2);
          }
          if (5 < param_4) {
            do {
              uVar7 = *(undefined1 *)puVar16;
              *(undefined1 *)puVar16 = *puVar12;
              *puVar12 = uVar7;
              uVar7 = *(undefined1 *)((long)puVar16 + 2);
              *(undefined1 *)((long)puVar16 + 2) = puVar12[-2];
              puVar12[-2] = uVar7;
              uVar7 = *(undefined1 *)(puVar16 + 1);
              *(undefined1 *)(puVar16 + 1) = puVar12[-4];
              puVar12[-4] = uVar7;
              uVar7 = *(undefined1 *)((long)puVar16 + 6);
              *(undefined1 *)((long)puVar16 + 6) = puVar12[-6];
              puVar12[-6] = uVar7;
              uVar10 = uVar10 - 8;
              puVar16 = puVar16 + 2;
              puVar12 = puVar12 + -8;
            } while (1 < uVar10);
          }
        }
        if (iVar8 == 0) {
          local_94 = 0;
                    /* try { // try from 0018ef87 to 0018ef9e has its CatchHandler @ 0018f3a7 */
          puVar16 = (undefined4 *)local_88;
          iVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1,puVar16,4);
          uVar14 = 0;
          if (iVar8 == 0) {
            uVar14 = local_94;
          }
          if (1 < uVar14) {
            uVar10 = (ulong)(int)uVar14;
            param_4 = uVar10 - 2;
            uVar14 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
            if ((uVar14 & 3) == 0) {
              puVar12 = (undefined1 *)((long)local_8c + uVar10 + 3);
            }
            else {
              lVar4 = uVar10 - 1;
              lVar5 = 0;
              do {
                lVar15 = lVar5;
                lVar11 = lVar4;
                uVar7 = *(undefined1 *)((long)local_88 + lVar15);
                *(undefined1 *)((long)local_88 + lVar15) = *(undefined1 *)((long)local_88 + lVar11);
                *(undefined1 *)((long)local_88 + lVar11) = uVar7;
                lVar4 = lVar11 + -2;
                lVar5 = lVar15 + 2;
              } while (((ulong)uVar14 & 3) * 2 != lVar15 + 2);
              puVar12 = (undefined1 *)((long)local_8c + lVar11 + 2);
              uVar10 = lVar11 - 1;
              puVar16 = (undefined4 *)((long)local_88 + lVar15 + 2);
            }
            if (5 < param_4) {
              do {
                uVar7 = *(undefined1 *)puVar16;
                *(undefined1 *)puVar16 = *puVar12;
                *puVar12 = uVar7;
                uVar7 = *(undefined1 *)((long)puVar16 + 2);
                *(undefined1 *)((long)puVar16 + 2) = puVar12[-2];
                puVar12[-2] = uVar7;
                uVar7 = *(undefined1 *)(puVar16 + 1);
                *(undefined1 *)(puVar16 + 1) = puVar12[-4];
                puVar12[-4] = uVar7;
                uVar7 = *(undefined1 *)((long)puVar16 + 6);
                *(undefined1 *)((long)puVar16 + 6) = puVar12[-6];
                puVar12[-6] = uVar7;
                uVar10 = uVar10 - 8;
                puVar16 = puVar16 + 2;
                puVar12 = puVar12 + -8;
              } while (1 < uVar10);
            }
          }
          if ((iVar8 == 0) && ((_local_88 == 0x46424368 || (_local_88 == 0x4678426b)))) {
            local_94 = 0;
                    /* try { // try from 0018f0dd to 0018f0f4 has its CatchHandler @ 0018f38f */
            puVar16 = (undefined4 *)local_84;
            iVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1,puVar16,4);
            uVar14 = 0;
            if (iVar8 == 0) {
              uVar14 = local_94;
            }
            if (1 < uVar14) {
              uVar10 = (ulong)(int)uVar14;
              param_4 = uVar10 - 2;
              uVar14 = ((uint)(param_4 >> 1) & 0x7fffffff) + 1;
              if ((uVar14 & 3) == 0) {
                puVar12 = (undefined1 *)((long)local_88 + uVar10 + 3);
              }
              else {
                lVar4 = uVar10 - 1;
                lVar5 = 0;
                do {
                  lVar15 = lVar5;
                  lVar11 = lVar4;
                  uVar7 = *(undefined1 *)((long)local_84 + lVar15);
                  *(undefined1 *)((long)local_84 + lVar15) =
                       *(undefined1 *)((long)local_84 + lVar11);
                  *(undefined1 *)((long)local_84 + lVar11) = uVar7;
                  lVar4 = lVar11 + -2;
                  lVar5 = lVar15 + 2;
                } while (((ulong)uVar14 & 3) * 2 != lVar15 + 2);
                puVar12 = (undefined1 *)((long)local_88 + lVar11 + 2);
                uVar10 = lVar11 - 1;
                puVar16 = (undefined4 *)((long)local_84 + lVar15 + 2);
              }
              if (5 < param_4) {
                do {
                  uVar7 = *(undefined1 *)puVar16;
                  *(undefined1 *)puVar16 = *puVar12;
                  *puVar12 = uVar7;
                  uVar7 = *(undefined1 *)((long)puVar16 + 2);
                  *(undefined1 *)((long)puVar16 + 2) = puVar12[-2];
                  puVar12[-2] = uVar7;
                  uVar7 = *(undefined1 *)(puVar16 + 1);
                  *(undefined1 *)(puVar16 + 1) = puVar12[-4];
                  puVar12[-4] = uVar7;
                  uVar7 = *(undefined1 *)((long)puVar16 + 6);
                  *(undefined1 *)((long)puVar16 + 6) = puVar12[-6];
                  puVar12[-6] = uVar7;
                  uVar10 = uVar10 - 8;
                  puVar16 = puVar16 + 2;
                  puVar12 = puVar12 + -8;
                } while (1 < uVar10);
              }
            }
            if (((iVar8 == 0) &&
                (bVar6 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator>>
                                   (param_1,(undefined1 *)&local_94),
                (int)CONCAT71(extraout_var,bVar6) == 0)) &&
               (((char)param_2[1] == '\0' || (local_94 == *param_2)))) {
              uStack_38 = local_94;
              bVar6 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator>>
                                (param_1,(undefined1 *)&local_6c);
              if ((int)CONCAT71(extraout_var_00,bVar6) == 0) {
                uStack_34 = local_6c;
                bVar6 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator>>
                                  (param_1,(undefined1 *)&local_70);
                if (((int)CONCAT71(extraout_var_01,bVar6) == 0) &&
                   ((0 < local_70 || (_local_88 != 0x4678426b)))) {
                  local_74 = 0;
                  if (_local_84 < 1) {
                    uVar10 = 0;
                  }
                  else {
                    bVar6 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator>>
                                      (param_1,(undefined1 *)&local_74);
                    if ((int)CONCAT71(extraout_var_02,bVar6) != 0) goto LAB_0018f088;
                    (anonymous_namespace)::IO::ByteOrderStream<1u>::seek(param_1,2,0x7c);
                    uVar10 = (ulong)local_74;
                  }
                  uStack_30 = (undefined4)uVar10;
                  if (_local_88 == 0x4678426b) {
                    /* try { // try from 0018f290 to 0018f2ae has its CatchHandler @ 0018f37a */
                    std::vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>>::resize
                              ((vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>> *)
                               &local_68,(long)local_70);
                    uVar9 = (anonymous_namespace)::loadPrograms
                                      ((_anonymous_namespace_ *)param_1,local_68,pVStack_60,
                                       (int *)param_2,param_4,param_5);
                    if ((char)uVar9 != '\0') {
LAB_0018f2b7:
                      *(Vst2xProgram **)this = local_68;
                      *(Vst2xProgram **)(this + 8) = pVStack_60;
                      *(undefined8 *)(this + 0x10) = local_58;
                      local_68 = (Vst2xProgram *)0x0;
                      pVStack_60 = (Vst2xProgram *)0x0;
                      local_58 = 0;
                      *(void **)(this + 0x18) = pvStack_50;
                      *(undefined8 *)(this + 0x20) = uStack_48;
                      *(ulong *)(this + 0x28) = CONCAT35(uStack_3b,local_40);
                      pvStack_50 = (void *)0x0;
                      uStack_48 = 0;
                      local_40 = 0;
                      uStack_3b = 0;
                      *(ulong *)(this + 0x35) =
                           CONCAT17(uStack_2c,CONCAT43(uStack_30,uStack_34._1_3_));
                      *(ulong *)(this + 0x30) = CONCAT44(uStack_34,uStack_38);
                      this[0x40] = (VST3)0x1;
                      pVVar1 = local_68;
                      pVVar2 = pVStack_60;
                      goto joined_r0x0018e9d9;
                    }
                  }
                  else {
                    bVar6 = (anonymous_namespace)::IO::ByteOrderStream<1u>::operator>>
                                      (param_1,(undefined1 *)&local_78);
                    if (((int)CONCAT71(extraout_var_03,bVar6) == 0) && ((ulong)local_78 != 0)) {
                    /* try { // try from 0018f355 to 0018f359 has its CatchHandler @ 0018f378 */
                      std::vector<signed_char,std::allocator<signed_char>>::resize
                                ((vector<signed_char,std::allocator<signed_char>> *)&pvStack_50,
                                 (ulong)local_78);
                      uVar7 = (anonymous_namespace)::IO::ByteOrderStream<1u>::read
                                        ((long *)param_1,(ulong)local_78,pvStack_50,uVar10,param_4,
                                         param_5);
                      if ((int)CONCAT71(extraout_var_04,uVar7) == 0) goto LAB_0018f2b7;
                    }
                  }
                }
              }
            }
          }
LAB_0018f088:
          this[0x40] = (VST3)0x0;
          *(undefined8 *)this = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
          *(undefined8 *)(this + 0x18) = 0;
          *(undefined8 *)(this + 0x20) = 0;
          *(undefined8 *)(this + 0x28) = 0;
          *(undefined8 *)(this + 0x2d) = 0;
          *(undefined8 *)(this + 0x35) = 0;
          pVVar1 = local_68;
          pVVar2 = pVStack_60;
          if (pvStack_50 != (void *)0x0) {
            operator_delete(pvStack_50);
            pVVar1 = local_68;
            pVVar2 = pVStack_60;
          }
          goto joined_r0x0018e9d9;
        }
      }
    }
  }
  this[0x40] = (VST3)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x2d) = 0;
  *(undefined8 *)(this + 0x35) = 0;
  pVVar1 = local_68;
  pVVar2 = pVStack_60;
joined_r0x0018e9d9:
  for (; pVVar3 = pVStack_60, pVVar1 != pVStack_60; pVVar1 = (Vst2xProgram *)((long)pVVar1 + 0x58))
  {
    pVStack_60 = pVVar2;
    if ((Vst2xProgram *)((long)pVVar1 + 0x48) != *(Vst2xProgram **)((long)pVVar1 + 0x38)) {
      operator_delete(*(Vst2xProgram **)((long)pVVar1 + 0x38));
    }
    if (*(void **)((long)pVVar1 + 0x18) != (void *)0x0) {
      operator_delete(*(void **)((long)pVVar1 + 0x18));
    }
    if (*(void **)pVVar1 != (void *)0x0) {
      operator_delete(*(void **)pVVar1);
    }
    pVVar2 = pVStack_60;
    pVStack_60 = pVVar3;
  }
  if (local_68 != (Vst2xProgram *)0x0) {
    pVStack_60 = pVVar2;
    operator_delete(local_68);
  }
  return this;
}


