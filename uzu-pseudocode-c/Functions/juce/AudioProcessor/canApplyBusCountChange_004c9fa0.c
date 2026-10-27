// Function : canApplyBusCountChange
// Namespace: juce:AudioProcessor
// Entry    : 004c9fa0
// Prototype: bool canApplyBusCountChange(AudioProcessor * this, byte param_1, int param_3_00, long * param_3)
// Body     : 004c9fa0 - 004ca337


/* juce::AudioProcessor::canApplyBusCountChange(bool, bool, juce::AudioProcessor::BusProperties&) */

bool __thiscall
juce::AudioProcessor::canApplyBusCountChange
          (AudioProcessor *this,byte param_1,int param_3_00,long *param_3)

{
  size_t __size;
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  undefined4 *puVar6;
  String *pSVar7;
  byte *pbVar8;
  uint uVar9;
  void *__src;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *__dest;
  char *pcVar15;
  bool bVar16;
  long local_68;
  byte *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  
  if (param_3_00 == 0) {
    cVar3 = (**(code **)(*(long *)this + 0x78))(this,param_1);
    if (cVar3 != '\0') {
      return *(int *)(this + (ulong)(param_1 ^ 1) * 0x10 + 0xcc) != 0;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x70))(this,param_1);
    if (cVar3 != '\0') {
      lVar5 = (ulong)(param_1 ^ 1) * 0x10;
      uVar2 = *(uint *)(this + lVar5 + 0xcc);
      if (uVar2 != 0) {
        pcVar15 = "Output #";
        if (param_1 != 0) {
          pcVar15 = "Input #";
        }
        bVar4 = *pcVar15;
        if (bVar4 == 0) {
          local_60 = &DAT_0061ac58;
          uVar9 = uVar2;
        }
        else {
          lVar11 = 0;
          pbVar8 = (byte *)pcVar15;
          do {
            pbVar8 = pbVar8 + 1;
            lVar10 = lVar11 + (ulong)(bVar4 >> 7);
            lVar11 = lVar10 + 1;
            bVar4 = *pbVar8;
          } while (bVar4 != 0);
          uVar12 = lVar10 + 5U & 0xfffffffffffffffc;
          puVar6 = operator_new__(uVar12 + 0x17);
          LOCK();
          *puVar6 = 0;
          UNLOCK();
          *(ulong *)(puVar6 + 2) = uVar12;
          local_60 = (byte *)(puVar6 + 4);
          bVar4 = *pcVar15;
          pbVar8 = local_60;
          if (bVar4 != 0) {
            do {
              pcVar15 = pcVar15 + 1;
              if ((char)bVar4 < '\0') {
                *pbVar8 = bVar4 >> 6 | 0xc0;
                pbVar8[1] = bVar4 & 0x3f | 0x80;
                pbVar8 = pbVar8 + 1;
              }
              else {
                *pbVar8 = bVar4;
              }
              pbVar8 = pbVar8 + 1;
              bVar4 = *pcVar15;
            } while (bVar4 != 0);
          }
          *pbVar8 = 0;
          uVar9 = *(uint *)(this + lVar5 + 0xcc);
        }
        if ((int)uVar9 < 0) {
          pbVar8 = (byte *)((long)&uStack_40 + 6);
          uVar9 = -uVar9;
          do {
            *pbVar8 = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
            pbVar8 = pbVar8 + -1;
            bVar16 = 9 < uVar9;
            uVar9 = uVar9 / 10;
          } while (bVar16);
          *pbVar8 = 0x2d;
        }
        else {
          pbVar8 = (byte *)((long)&uStack_40 + 7);
          do {
            pbVar8[-1] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
            pbVar8 = pbVar8 + -1;
            bVar16 = 9 < uVar9;
            uVar9 = uVar9 / 10;
          } while (bVar16);
        }
        uStack_40 = uStack_40 & 0xffffffffffffff;
                    /* try { // try from 004ca197 to 004ca19b has its CatchHandler @ 004ca363 */
        local_68 = StringHolderUtils::createFromFixedLength(pbVar8,(long)&local_38 + ~(ulong)pbVar8)
        ;
                    /* try { // try from 004ca1a0 to 004ca1ac has its CatchHandler @ 004ca338 */
        pSVar7 = juce::String::operator+=((String *)&local_60,(String *)&local_68);
        lVar11 = *(long *)pSVar7;
        piVar14 = (int *)(lVar11 + -0x10);
        if (piVar14 != &emptyString) {
          LOCK();
          *piVar14 = *piVar14 + 1;
          UNLOCK();
        }
        lVar10 = *param_3;
        *param_3 = lVar11;
        piVar14 = (int *)(lVar10 + -0x10);
        if (piVar14 != &emptyString) {
          LOCK();
          iVar1 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar14);
          }
        }
        piVar14 = (int *)(local_68 + -0x10);
        if (piVar14 != &emptyString) {
          LOCK();
          iVar1 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar14);
          }
        }
        pbVar8 = local_60 + -0x10;
        if (pbVar8 != (byte *)&emptyString) {
          LOCK();
          iVar1 = *(int *)pbVar8;
          *(int *)pbVar8 = *(int *)pbVar8 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(pbVar8);
          }
        }
        if ((int)uVar2 < 1) {
          local_58 = (undefined8 *)0x0;
          uStack_40 = 4;
          _local_38 = 0xffffffff;
          uStack_50 = 0;
          local_48 = 0;
        }
        else {
          lVar5 = *(long *)(*(long *)(this + lVar5 + 0xc0) + (ulong)(uVar2 - 1) * 8);
          local_58 = (undefined8 *)0x0;
          uStack_40 = *(ulong *)(lVar5 + 0x50);
          __src = (void *)(lVar5 + 0x40);
          if (*(void **)(lVar5 + 0x38) != (void *)0x0) {
            __src = *(void **)(lVar5 + 0x38);
          }
          uVar2 = *(uint *)(lVar5 + 0x58);
          uVar9 = 0xffffffff;
          if (-1 < (int)uVar2) {
            uVar13 = uVar2 & 0xffffffe0;
            uVar12 = (ulong)(uVar2 >> 5);
LAB_004ca270:
            uVar2 = *(uint *)((long)__src + uVar12 * 4);
            if (uVar2 == 0) goto code_r0x004ca277;
            uVar9 = 0x1f;
            if (uVar2 != 0) {
              for (; uVar2 >> uVar9 == 0; uVar9 = uVar9 - 1) {
              }
            }
            uVar9 = (uVar9 ^ 0x1f | uVar13) ^ 0x1f;
          }
LAB_004ca2c0:
          _local_38 = CONCAT14(*(undefined1 *)(lVar5 + 0x5c),uVar9);
          __size = uStack_40 * 4;
          if (4 < uStack_40) {
            if (__size == 0) {
              local_58 = (undefined8 *)0x0;
            }
            else {
              local_58 = malloc(__size);
            }
          }
          __dest = &uStack_50;
          if (local_58 != (undefined8 *)0x0) {
            __dest = local_58;
          }
          memcpy(__dest,__src,__size);
        }
        BigInteger::operator=((BigInteger *)(param_3 + 1),(BigInteger *)&local_58);
        free(local_58);
        *(undefined1 *)(param_3 + 6) = 1;
        return true;
      }
    }
  }
  return false;
code_r0x004ca277:
  uVar13 = uVar13 - 0x20;
  iVar1 = (int)uVar12;
  uVar12 = uVar12 - 1;
  if (iVar1 < 1) goto LAB_004ca2c0;
  goto LAB_004ca270;
}


