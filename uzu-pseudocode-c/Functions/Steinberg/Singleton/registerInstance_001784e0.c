// Function : registerInstance
// Namespace: Steinberg:Singleton
// Entry    : 001784e0
// Prototype: undefined registerInstance(undefined8 param_1)
// Body     : 001784e0 - 00178627


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Singleton::registerInstance(Steinberg::FObject**) */

void __cdecl Steinberg::Singleton::registerInstance(undefined8 param_1)

{
  void *__src;
  undefined8 *puVar1;
  ulong uVar2;
  void *__dest;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  
  if (singletonsTerminated != '\0') {
    return;
  }
  if (singletonInstances == (undefined8 *)0x0) {
    singletonInstances = operator_new(0x18);
    *singletonInstances = 0;
    singletonInstances[1] = 0;
    singletonInstances[2] = 0;
    puVar3 = (undefined8 *)singletonInstances[1];
    if (puVar3 == (undefined8 *)singletonInstances[2]) goto LAB_0017854e;
  }
  else {
    puVar3 = (undefined8 *)singletonInstances[1];
    if (puVar3 == (undefined8 *)singletonInstances[2]) {
LAB_0017854e:
      puVar1 = singletonInstances;
      __src = (void *)*singletonInstances;
      __n = (long)puVar3 - (long)__src;
      if (__n == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar5 = (long)__n >> 3;
      uVar2 = 1;
      if (__n != 0) {
        uVar2 = uVar5;
      }
      uVar4 = uVar2 + uVar5;
      if (uVar4 >> 0x3c != 0) {
        uVar4 = 0xfffffffffffffff;
      }
      if (CARRY8(uVar2,uVar5)) {
        uVar4 = 0xfffffffffffffff;
      }
      if (uVar4 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = operator_new(uVar4 * 8);
      }
      *(undefined8 *)((long)__dest + uVar5 * 8) = param_1;
      if (0 < (long)__n) {
        memmove(__dest,__src,__n);
      }
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      *puVar1 = __dest;
      puVar1[1] = (long)__dest + uVar5 * 8 + 8;
      puVar1[2] = (void *)((long)__dest + uVar4 * 8);
      return;
    }
  }
  puVar1 = singletonInstances;
  *puVar3 = param_1;
  puVar1[1] = puVar1[1] + 8;
  return;
}


