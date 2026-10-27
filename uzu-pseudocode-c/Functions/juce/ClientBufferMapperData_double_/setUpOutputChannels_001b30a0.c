// Function : setUpOutputChannels
// Namespace: juce:ClientBufferMapperData_double_
// Entry    : 001b30a0
// Prototype: undefined setUpOutputChannels(long param_1, long * param_2, undefined8 * param_3)
// Body     : 001b30a0 - 001b3328


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ClientBufferMapperData<double>::setUpOutputChannels(juce::ScratchBuffer<double>&,
   std::vector<juce::DynamicChannelMapping, std::allocator<juce::DynamicChannelMapping> > const&,
   std::vector<double*, std::allocator<double*> >&) */

void __cdecl
juce::ClientBufferMapperData<double>::setUpOutputChannels
          (long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  void *__src;
  undefined8 uVar2;
  ulong uVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t __n;
  undefined8 *puVar10;
  ulong uVar11;
  ulong local_38;
  
  lVar4 = *param_2;
  lVar9 = param_2[1];
  if (lVar9 != lVar4) {
    uVar5 = 0;
    lVar8 = 0;
    do {
      lVar7 = uVar5 * 0x50;
      if (*(char *)(lVar4 + 0x40 + lVar7) != '\0') {
        if (*(long *)(lVar4 + 0x30 + lVar7) == *(long *)(lVar4 + 0x28 + lVar7)) {
          uVar6 = 0;
        }
        else {
          puVar10 = (undefined8 *)param_3[1];
          uVar11 = 0;
          do {
            __src = (void *)*param_3;
            __n = (long)puVar10 - (long)__src;
            uVar6 = (long)__n >> 3;
            if (uVar6 <= uVar11 + lVar8) {
              iVar1 = *(int *)(param_1 + 0x128);
              *(int *)(param_1 + 0x128) = iVar1 + 1;
              *(undefined1 *)(param_1 + 0x120) = 0;
              uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8);
              if (puVar10 == (undefined8 *)param_3[2]) {
                if (__n == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar3 = 1;
                if (__n != 0) {
                  uVar3 = uVar6;
                }
                local_38 = uVar3 + uVar6;
                if (local_38 < 0x1000000000000000) {
                  if (!CARRY8(uVar3,uVar6)) goto LAB_001b32ad;
LAB_001b3202:
                  local_38 = 0xfffffffffffffff;
LAB_001b3210:
                  __dest = operator_new(local_38 * 8);
                  *(undefined8 *)((long)__dest + uVar6 * 8) = uVar2;
                }
                else {
                  local_38 = 0xfffffffffffffff;
                  if (CARRY8(uVar3,uVar6)) goto LAB_001b3202;
LAB_001b32ad:
                  if (local_38 != 0) goto LAB_001b3210;
                  __dest = (void *)0x0;
                  *(undefined8 *)(uVar6 * 8) = uVar2;
                }
                if (0 < (long)__n) {
                  memmove(__dest,__src,__n);
                }
                puVar10 = (undefined8 *)((long)__dest + uVar6 * 8 + 8);
                if (__src != (void *)0x0) {
                  operator_delete(__src);
                }
                *param_3 = __dest;
                param_3[1] = puVar10;
                param_3[2] = (void *)(local_38 * 8 + (long)__dest);
              }
              else {
                *puVar10 = uVar2;
                puVar10 = (undefined8 *)(param_3[1] + 8);
                param_3[1] = puVar10;
              }
            }
            uVar11 = uVar11 + 1;
            uVar6 = *(long *)(lVar4 + lVar7 + 0x30) - *(long *)(lVar4 + lVar7 + 0x28) >> 2;
          } while (uVar11 < uVar6);
          lVar4 = *param_2;
          lVar9 = param_2[1];
        }
        lVar8 = lVar8 + uVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)((lVar9 - lVar4 >> 4) * -0x3333333333333333));
  }
  return;
}


