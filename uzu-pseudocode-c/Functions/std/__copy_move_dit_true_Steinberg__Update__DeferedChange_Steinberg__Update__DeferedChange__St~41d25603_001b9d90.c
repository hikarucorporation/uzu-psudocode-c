// Function : __copy_move_dit<true,Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*,std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>>
// Namespace: std
// Entry    : 001b9d90
// Prototype: _Deque_iterator __copy_move_dit<true,Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*,std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>>(undefined8 * param_1, long * param_2, long * param_3, undefined8 * param_4)
// Body     : 001b9d90 - 001ba3da


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Deque_iterator<Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*> std::__copy_move_dit<true, Steinberg::Update::DeferedChange,
   Steinberg::Update::DeferedChange&, Steinberg::Update::DeferedChange*,
   std::_Deque_iterator<Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*> >(std::_Deque_iterator<Steinberg::Update::DeferedChange,
   Steinberg::Update::DeferedChange&, Steinberg::Update::DeferedChange*>,
   std::_Deque_iterator<Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*>, std::_Deque_iterator<Steinberg::Update::DeferedChange,
   Steinberg::Update::DeferedChange&, Steinberg::Update::DeferedChange*>) */

void __cdecl
std::
__copy_move_dit<true,Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*,std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>>
          (undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar4 = (undefined8 *)*param_2;
  if (param_2[3] == param_3[3]) {
    puVar3 = (undefined8 *)*param_4;
    lVar11 = param_4[1];
    lVar10 = param_4[2];
    lVar9 = param_4[3];
    if (0 < *param_3 - (long)puVar4) {
      uVar14 = (ulong)(*param_3 - (long)puVar4) >> 4;
      do {
        while( true ) {
          uVar13 = lVar10 - (long)puVar3 >> 4;
          if ((long)uVar14 <= (long)uVar13) {
            uVar13 = uVar14;
          }
          if (0 < (long)uVar13) {
            puVar6 = puVar4;
            uVar12 = uVar13;
            puVar5 = puVar3;
            if ((uVar13 & 3) != 0) {
              uVar12 = 0;
              do {
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
                *puVar5 = *puVar6;
                puVar6 = puVar6 + 2;
                puVar5 = puVar5 + 2;
                uVar12 = uVar12 + 1;
              } while ((uVar13 & 3) != uVar12);
              uVar12 = uVar13 - uVar12;
            }
            if (2 < uVar13 - 1) {
              uVar12 = uVar12 - 1;
              lVar2 = 0;
              do {
                *(undefined4 *)((long)puVar5 + lVar2 + 8) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 8);
                *(undefined8 *)((long)puVar5 + lVar2) = *(undefined8 *)((long)puVar6 + lVar2);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x18) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x18);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x10) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x10);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x28) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x28);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x20) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x20);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x30) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x30);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x38) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x38);
                uVar12 = uVar12 - 4;
                lVar2 = lVar2 + 0x40;
              } while (uVar12 < 0xfffffffffffffffe);
            }
          }
          uVar12 = ((long)puVar3 - lVar11 >> 4) + uVar13;
          if (-1 < (long)uVar12) break;
          uVar8 = uVar12 >> 5 | 0xf800000000000000;
LAB_001ba28a:
          lVar11 = *(long *)(lVar9 + uVar8 * 8);
          lVar9 = lVar9 + uVar8 * 8;
          lVar10 = lVar11 + 0x200;
          puVar3 = (undefined8 *)((uVar12 + uVar8 * -0x20) * 0x10 + lVar11);
          puVar4 = puVar4 + uVar13 * 2;
          uVar12 = uVar14 - uVar13;
          bVar1 = (long)uVar14 < (long)uVar13;
          uVar14 = uVar12;
          if (uVar12 == 0 || bVar1) goto LAB_001ba3c1;
        }
        if (0x1f < uVar12) {
          uVar8 = uVar12 >> 5;
          goto LAB_001ba28a;
        }
        puVar3 = puVar3 + uVar13 * 2;
        puVar4 = puVar4 + uVar13 * 2;
        uVar12 = uVar14 - uVar13;
        bVar1 = (long)uVar13 <= (long)uVar14;
        uVar14 = uVar12;
      } while (uVar12 != 0 && bVar1);
    }
  }
  else {
    puVar3 = (undefined8 *)*param_4;
    lVar11 = param_4[1];
    lVar10 = param_4[2];
    lVar9 = param_4[3];
    if (0 < param_2[2] - (long)puVar4) {
      uVar14 = (ulong)(param_2[2] - (long)puVar4) >> 4;
      do {
        while( true ) {
          uVar13 = lVar10 - (long)puVar3 >> 4;
          if ((long)uVar14 <= (long)uVar13) {
            uVar13 = uVar14;
          }
          if (0 < (long)uVar13) {
            puVar6 = puVar4;
            uVar12 = uVar13;
            puVar5 = puVar3;
            if ((uVar13 & 3) != 0) {
              uVar12 = 0;
              do {
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
                *puVar5 = *puVar6;
                puVar6 = puVar6 + 2;
                puVar5 = puVar5 + 2;
                uVar12 = uVar12 + 1;
              } while ((uVar13 & 3) != uVar12);
              uVar12 = uVar13 - uVar12;
            }
            if (2 < uVar13 - 1) {
              uVar12 = uVar12 - 1;
              lVar2 = 0;
              do {
                *(undefined4 *)((long)puVar5 + lVar2 + 8) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 8);
                *(undefined8 *)((long)puVar5 + lVar2) = *(undefined8 *)((long)puVar6 + lVar2);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x18) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x18);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x10) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x10);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x28) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x28);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x20) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x20);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x30) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x30);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x38) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x38);
                uVar12 = uVar12 - 4;
                lVar2 = lVar2 + 0x40;
              } while (uVar12 < 0xfffffffffffffffe);
            }
          }
          uVar12 = ((long)puVar3 - lVar11 >> 4) + uVar13;
          if (-1 < (long)uVar12) break;
          uVar8 = uVar12 >> 5 | 0xf800000000000000;
LAB_001b9e04:
          lVar11 = *(long *)(lVar9 + uVar8 * 8);
          lVar9 = lVar9 + uVar8 * 8;
          lVar10 = lVar11 + 0x200;
          puVar3 = (undefined8 *)((uVar12 + uVar8 * -0x20) * 0x10 + lVar11);
          puVar4 = puVar4 + uVar13 * 2;
          uVar12 = uVar14 - uVar13;
          bVar1 = (long)uVar14 < (long)uVar13;
          uVar14 = uVar12;
          if (uVar12 == 0 || bVar1) goto LAB_001b9f3c;
        }
        if (0x1f < uVar12) {
          uVar8 = uVar12 >> 5;
          goto LAB_001b9e04;
        }
        puVar3 = puVar3 + uVar13 * 2;
        puVar4 = puVar4 + uVar13 * 2;
        uVar12 = uVar14 - uVar13;
        bVar1 = (long)uVar13 <= (long)uVar14;
        uVar14 = uVar12;
      } while (uVar12 != 0 && bVar1);
    }
LAB_001b9f3c:
    *param_4 = puVar3;
    param_4[1] = lVar11;
    param_4[2] = lVar10;
    param_4[3] = lVar9;
    puVar4 = (undefined8 *)param_2[3];
    while (puVar4 = puVar4 + 1, puVar4 != (undefined8 *)param_3[3]) {
      puVar6 = (undefined8 *)*puVar4;
      uVar14 = 0x20;
      do {
        while( true ) {
          uVar13 = lVar10 - (long)puVar3 >> 4;
          if ((long)uVar14 <= (long)uVar13) {
            uVar13 = uVar14;
          }
          if (0 < (long)uVar13) {
            puVar5 = puVar3;
            uVar12 = uVar13;
            puVar7 = puVar6;
            if ((uVar13 & 3) != 0) {
              uVar12 = 0;
              do {
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
                *puVar5 = *puVar7;
                puVar7 = puVar7 + 2;
                puVar5 = puVar5 + 2;
                uVar12 = uVar12 + 1;
              } while ((uVar13 & 3) != uVar12);
              uVar12 = uVar13 - uVar12;
            }
            if (2 < uVar13 - 1) {
              uVar12 = uVar12 - 1;
              lVar2 = 0;
              do {
                *(undefined4 *)((long)puVar5 + lVar2 + 8) =
                     *(undefined4 *)((long)puVar7 + lVar2 + 8);
                *(undefined8 *)((long)puVar5 + lVar2) = *(undefined8 *)((long)puVar7 + lVar2);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x18) =
                     *(undefined4 *)((long)puVar7 + lVar2 + 0x18);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x10) =
                     *(undefined8 *)((long)puVar7 + lVar2 + 0x10);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x28) =
                     *(undefined4 *)((long)puVar7 + lVar2 + 0x28);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x20) =
                     *(undefined8 *)((long)puVar7 + lVar2 + 0x20);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x30) =
                     *(undefined8 *)((long)puVar7 + lVar2 + 0x30);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x38) =
                     *(undefined4 *)((long)puVar7 + lVar2 + 0x38);
                uVar12 = uVar12 - 4;
                lVar2 = lVar2 + 0x40;
              } while (uVar12 < 0xfffffffffffffffe);
            }
          }
          uVar12 = ((long)puVar3 - lVar11 >> 4) + uVar13;
          if (-1 < (long)uVar12) break;
          uVar8 = uVar12 >> 5 | 0xf800000000000000;
LAB_001b9fa4:
          lVar11 = *(long *)(lVar9 + uVar8 * 8);
          lVar9 = lVar9 + uVar8 * 8;
          lVar10 = lVar11 + 0x200;
          puVar3 = (undefined8 *)((uVar12 + uVar8 * -0x20) * 0x10 + lVar11);
          puVar6 = puVar6 + uVar13 * 2;
          uVar12 = uVar14 - uVar13;
          bVar1 = (long)uVar14 < (long)uVar13;
          uVar14 = uVar12;
          if (uVar12 == 0 || bVar1) goto LAB_001b9f60;
        }
        if (0x1f < uVar12) {
          uVar8 = uVar12 >> 5;
          goto LAB_001b9fa4;
        }
        puVar3 = puVar3 + uVar13 * 2;
        puVar6 = puVar6 + uVar13 * 2;
        uVar12 = uVar14 - uVar13;
        bVar1 = (long)uVar13 <= (long)uVar14;
        uVar14 = uVar12;
      } while (uVar12 != 0 && bVar1);
LAB_001b9f60:
      *param_4 = puVar3;
      param_4[1] = lVar11;
      param_4[2] = lVar10;
      param_4[3] = lVar9;
    }
    puVar4 = (undefined8 *)param_3[1];
    if (0 < *param_3 - (long)puVar4) {
      uVar14 = (ulong)(*param_3 - (long)puVar4) >> 4;
      do {
        while( true ) {
          uVar13 = lVar10 - (long)puVar3 >> 4;
          if ((long)uVar14 <= (long)uVar13) {
            uVar13 = uVar14;
          }
          if (0 < (long)uVar13) {
            puVar6 = puVar4;
            uVar12 = uVar13;
            puVar5 = puVar3;
            if ((uVar13 & 3) != 0) {
              uVar12 = 0;
              do {
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
                *puVar5 = *puVar6;
                puVar6 = puVar6 + 2;
                puVar5 = puVar5 + 2;
                uVar12 = uVar12 + 1;
              } while ((uVar13 & 3) != uVar12);
              uVar12 = uVar13 - uVar12;
            }
            if (2 < uVar13 - 1) {
              uVar12 = uVar12 - 1;
              lVar2 = 0;
              do {
                *(undefined4 *)((long)puVar5 + lVar2 + 8) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 8);
                *(undefined8 *)((long)puVar5 + lVar2) = *(undefined8 *)((long)puVar6 + lVar2);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x18) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x18);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x10) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x10);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x28) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x28);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x20) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x20);
                *(undefined8 *)((long)puVar5 + lVar2 + 0x30) =
                     *(undefined8 *)((long)puVar6 + lVar2 + 0x30);
                *(undefined4 *)((long)puVar5 + lVar2 + 0x38) =
                     *(undefined4 *)((long)puVar6 + lVar2 + 0x38);
                uVar12 = uVar12 - 4;
                lVar2 = lVar2 + 0x40;
              } while (uVar12 < 0xfffffffffffffffe);
            }
          }
          uVar12 = ((long)puVar3 - lVar11 >> 4) + uVar13;
          if (-1 < (long)uVar12) break;
          uVar8 = uVar12 >> 5 | 0xf800000000000000;
LAB_001ba114:
          lVar11 = *(long *)(lVar9 + uVar8 * 8);
          lVar9 = lVar9 + uVar8 * 8;
          lVar10 = lVar11 + 0x200;
          puVar3 = (undefined8 *)((uVar12 + uVar8 * -0x20) * 0x10 + lVar11);
          puVar4 = puVar4 + uVar13 * 2;
          uVar12 = uVar14 - uVar13;
          bVar1 = (long)uVar14 < (long)uVar13;
          uVar14 = uVar12;
          if (uVar12 == 0 || bVar1) goto LAB_001ba3c1;
        }
        if (0x1f < uVar12) {
          uVar8 = uVar12 >> 5;
          goto LAB_001ba114;
        }
        puVar3 = puVar3 + uVar13 * 2;
        puVar4 = puVar4 + uVar13 * 2;
        uVar12 = uVar14 - uVar13;
        bVar1 = (long)uVar13 <= (long)uVar14;
        uVar14 = uVar12;
      } while (uVar12 != 0 && bVar1);
    }
  }
LAB_001ba3c1:
  *param_1 = puVar3;
  param_1[1] = lVar11;
  param_1[2] = lVar10;
  param_1[3] = lVar9;
  return;
}


