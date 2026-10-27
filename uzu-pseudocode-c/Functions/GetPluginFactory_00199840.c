// Function : GetPluginFactory
// Namespace: 
// Entry    : 00199840
// Prototype: undefined8 * GetPluginFactory(void)
// Body     : 00199840 - 00199892


undefined8 * GetPluginFactory(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x1e0);
  puVar1[1] = 0x4c51524300000001;
  *(undefined1 *)(puVar1 + 2) = 0;
  memset((void *)((long)puVar1 + 0x11),0,0x1bb);
  *(undefined4 *)((long)puVar1 + 0x1cc) = 0x10;
  *puVar1 = &PTR_queryInterface_007051f0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return puVar1;
}


