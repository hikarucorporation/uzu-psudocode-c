// Function : signalWork
// Namespace: PdWorker
// Entry    : 00167850
// Prototype: undefined signalWork(PdWorker * this)
// Body     : 00167850 - 0016785b


/* PdWorker::signalWork() */

void __thiscall PdWorker::signalWork(PdWorker *this)

{
  juce::WaitableEvent::signal((WaitableEvent *)(this + 0x198));
  return;
}


