// Function : copyToHostOutputBuses
// Namespace: juce:ClientRemappedBuffer_float_
// Entry    : 001b20d0
// Prototype: undefined copyToHostOutputBuses(ClientRemappedBuffer<float> * this, ulong param_1)
// Body     : 001b20d0 - 001b22bb


/* juce::ClientRemappedBuffer<float>::copyToHostOutputBuses(unsigned long) const */

void __thiscall
juce::ClientRemappedBuffer<float>::copyToHostOutputBuses
          (ClientRemappedBuffer<float> *this,ulong param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long local_40;
  
  lVar7 = **(long **)(this + 0x128);
  if ((*(long **)(this + 0x128))[1] != lVar7) {
    uVar6 = 0;
    local_40 = 0;
    do {
      lVar4 = uVar6 * 0x50;
      if ((*(char *)(lVar7 + 0x48 + lVar4) != '\0') && (uVar6 < param_1)) {
        lVar5 = *(long *)(this + 0x130);
        lVar3 = *(long *)(lVar5 + 0x20);
        puVar1 = (uint *)(lVar3 + uVar6 * 0x18);
        iVar2 = *(int *)(lVar3 + uVar6 * 0x18);
        if (*(char *)(lVar7 + 0x40 + lVar4) == '\0') {
          if ((iVar2 != 0) &&
             (FloatVectorOperationsBase<float,unsigned_long>::clear
                        ((void *)**(undefined8 **)(lVar3 + 0x10 + uVar6 * 0x18),
                         (long)*(int *)(lVar5 + 8)), 1 < *puVar1)) {
            uVar8 = 1;
            do {
              FloatVectorOperationsBase<float,unsigned_long>::clear
                        (*(void **)(*(long *)(lVar3 + uVar6 * 0x18 + 0x10) + uVar8 * 8),
                         (long)*(int *)(*(long *)(this + 0x130) + 8));
              uVar8 = uVar8 + 1;
            } while (uVar8 < (ulong)(long)(int)*puVar1);
          }
        }
        else if (iVar2 != 0) {
          uVar8 = 1;
          lVar9 = 0;
          while( true ) {
            FloatVectorOperationsBase<float,unsigned_long>::copy
                      (*(void **)(*(long *)(lVar3 + uVar6 * 0x18 + 0x10) + -8 + uVar8 * 8),
                       *(void **)(*(long *)(this + 0x10) +
                                 (long)(*(int *)(*(long *)(lVar7 + lVar4 + 0x28) + (lVar9 >> 0x1e))
                                       + (int)local_40) * 8),(long)*(int *)(lVar5 + 8));
            if ((ulong)(long)(int)*puVar1 <= uVar8) break;
            lVar5 = *(long *)(this + 0x130);
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 0x100000000;
          }
        }
      }
      if (*(char *)(lVar7 + 0x40 + lVar4) != '\0') {
        local_40 = local_40 +
                   (*(long *)(lVar7 + 0x30 + lVar4) - *(long *)(lVar7 + 0x28 + lVar4) >> 2);
      }
      uVar6 = uVar6 + 1;
      lVar7 = **(long **)(this + 0x128);
    } while (uVar6 < (ulong)(((*(long **)(this + 0x128))[1] - lVar7 >> 4) * -0x3333333333333333));
  }
  return;
}


