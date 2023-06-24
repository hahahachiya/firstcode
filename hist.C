// root macro to create histogram

void hist(){

  TH1* h= new TH1F("h", "histo", 100, -10, 10);

  for(int i=0; i<10000; i++){
    h->Fill(gRandom->Gaus(0, 2));
  }

  TCanvas *c1 = new TCanvas("c1", "c1", 600, 450);
  h->Draw();

}
