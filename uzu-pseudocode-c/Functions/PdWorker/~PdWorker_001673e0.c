// Function : ~PdWorker
// Namespace: PdWorker
// Entry    : 001673e0
// Prototype: undefined ~PdWorker(PdWorker * this)
// Body     : 001673e0 - 001673f1


/* PdWorker::~PdWorker() */

void __thiscall PdWorker::~PdWorker(PdWorker *this)

{
  ~PdWorker(this);
  operator_delete(this);
  return;
}


