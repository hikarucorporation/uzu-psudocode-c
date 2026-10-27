// Function : setUpInputChannels
// Namespace: juce:ClientBufferMapperData_float_
// Entry    : 001b1ae0
// Prototype: undefined setUpInputChannels(long param_1, ulong param_2, long param_3, long * param_4, long * param_5)
// Body     : 001b1ae0 - 001b1e38


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ClientBufferMapperData<float>::setUpInputChannels(Steinberg::Vst::ProcessData&, unsigned
   long, juce::ScratchBuffer<float>&, std::vector<juce::DynamicChannelMapping,
   std::allocator<juce::DynamicChannelMapping> > const&, std::vector<float*, std::allocator<float*>
   >&) */

void __cdecl
juce::ClientBufferMapperData<float>::setUpInputChannels
          (long param_1,ulong param_2,long param_3,long *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  void *__src;
  ulong uVar4;
  void *__dest;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  size_t __n;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong local_38;
  
  lVar11 = *param_4;
  if (param_4[1] != lVar11) {
    uVar6 = 0;
    do {
      lVar8 = uVar6 * 0x50;
      if (*(char *)(lVar11 + 0x40 + lVar8) != '\0') {
        puVar10 = (undefined8 *)param_5[1];
        lVar13 = (long)puVar10 - *param_5;
        lVar1 = lVar11 + lVar8;
        plVar12 = (long *)(lVar1 + 0x30);
        lVar5 = *(long *)(lVar11 + 0x30 + lVar8);
        lVar7 = lVar5;
        if (lVar5 != *(long *)(lVar11 + 0x28 + lVar8)) {
          uVar14 = 0;
          do {
            iVar2 = *(int *)(param_3 + 0x128);
            *(int *)(param_3 + 0x128) = iVar2 + 1;
            *(undefined1 *)(param_3 + 0x120) = 0;
            uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x10) + (long)iVar2 * 8);
            if (puVar10 == (undefined8 *)param_5[2]) {
              __src = (void *)*param_5;
              __n = (long)puVar10 - (long)__src;
              if (__n == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar9 = (long)__n >> 3;
              uVar4 = 1;
              if (__n != 0) {
                uVar4 = uVar9;
              }
              local_38 = uVar4 + uVar9;
              if (local_38 < 0x1000000000000000) {
                if (CARRY8(uVar4,uVar9)) goto LAB_001b1c65;
LAB_001b1cf4:
                if (local_38 != 0) goto LAB_001b1c73;
                __dest = (void *)0x0;
                *(undefined8 *)(uVar9 * 8) = uVar3;
              }
              else {
                local_38 = 0xfffffffffffffff;
                if (!CARRY8(uVar4,uVar9)) goto LAB_001b1cf4;
LAB_001b1c65:
                local_38 = 0xfffffffffffffff;
LAB_001b1c73:
                __dest = operator_new(local_38 * 8);
                *(undefined8 *)((long)__dest + uVar9 * 8) = uVar3;
              }
              if (0 < (long)__n) {
                memmove(__dest,__src,__n);
              }
              puVar10 = (undefined8 *)((long)__dest + uVar9 * 8 + 8);
              if (__src != (void *)0x0) {
                operator_delete(__src);
              }
              *param_5 = (long)__dest;
              param_5[1] = (long)puVar10;
              param_5[2] = (long)((long)__dest + local_38 * 8);
            }
            else {
              *puVar10 = uVar3;
              puVar10 = (undefined8 *)(param_5[1] + 8);
              param_5[1] = (long)puVar10;
            }
            uVar14 = uVar14 + 1;
            lVar7 = *plVar12;
            lVar5 = *(long *)(lVar1 + 0x28);
          } while (uVar14 < (ulong)(lVar7 - lVar5 >> 2));
        }
        lVar13 = lVar13 >> 3;
        if ((*(char *)(lVar11 + 0x48 + lVar8) == '\0') || (param_2 <= uVar6)) {
          if (lVar7 != lVar5) {
            uVar14 = 0;
            do {
              FloatVectorOperationsBase<float,unsigned_long>::clear
                        (*(void **)(*param_5 + lVar13 * 8 + uVar14 * 8),(long)*(int *)(param_1 + 8))
              ;
              uVar14 = uVar14 + 1;
            } while (uVar14 < (ulong)(*plVar12 - *(long *)(lVar1 + 0x28) >> 2));
          }
        }
        else if (lVar7 != lVar5) {
          lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x10 + uVar6 * 0x18);
          lVar8 = 0;
          uVar14 = 0;
          do {
            FloatVectorOperationsBase<float,unsigned_long>::copy
                      (*(void **)(*param_5 + (*(int *)(lVar5 + (lVar8 >> 0x1e)) + lVar13) * 8),
                       *(void **)(lVar11 + uVar14 * 8),(long)*(int *)(param_1 + 8));
            uVar14 = uVar14 + 1;
            lVar5 = *(long *)(lVar1 + 0x28);
            lVar8 = lVar8 + 0x100000000;
          } while (uVar14 < (ulong)(*plVar12 - lVar5 >> 2));
        }
      }
      uVar6 = uVar6 + 1;
      lVar11 = *param_4;
    } while (uVar6 < (ulong)((param_4[1] - lVar11 >> 4) * -0x3333333333333333));
  }
  return;
}


