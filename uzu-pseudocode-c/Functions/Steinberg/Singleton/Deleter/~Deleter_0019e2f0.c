// Function : ~Deleter
// Namespace: Steinberg:Singleton:Deleter
// Entry    : 0019e2f0
// Prototype: undefined ~Deleter(void)
// Body     : 0019e2f0 - 0019e38a


/* Steinberg::Singleton::Deleter::~Deleter() */

void __thiscall Steinberg::Singleton::Deleter::~Deleter(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  singletonsTerminated = 1;
  if (singletonInstances == (undefined8 *)0x0) goto LAB_0019e368;
  puVar3 = (undefined8 *)*singletonInstances;
  puVar1 = (undefined8 *)singletonInstances[1];
  if (puVar3 == puVar1) {
LAB_0019e348:
    puVar3 = singletonInstances;
    if ((void *)*singletonInstances != (void *)0x0) {
      operator_delete((void *)*singletonInstances);
    }
    operator_delete(puVar3);
  }
  else {
    do {
      puVar2 = (undefined8 *)*puVar3;
                    /* try { // try from 0019e329 to 0019e32b has its CatchHandler @ 0019e38b */
      (**(code **)(*(long *)*puVar2 + 0x10))();
      *puVar2 = 0;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    if (singletonInstances != (undefined8 *)0x0) goto LAB_0019e348;
  }
  singletonInstances = (undefined8 *)0x0;
LAB_0019e368:
  if (singletonsLock != (long *)0x0) {
    (**(code **)(*singletonsLock + 8))();
  }
  singletonsLock = (long *)0x0;
  return;
}


