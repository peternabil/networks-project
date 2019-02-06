#include <stdlib.h>
#include <string.h>

struct msg {
  char data[20];
};
struct pkt {
   int seqnum;
   int acknum;
   int checksum;
   int payload[20];
};
function(p)
  struct pkt p;
{
  for(int i = 0 ; i<20 ; i++){
    p.payload[i]='a';
    printf("%c",p.payload[i]);
  }
  printf("\n");
}


checkchecksum(struct pkt packet){}


checksumming(struct pkt packet){
  packet.checksum = packet.seqnum+packet.acknum;
  for(int i = 0 ; i<20 ; i++){
    int temp = packet.payload[i];
    packet.checksum+=temp;
    //printf("%i\n",packet.payload[i]);
  }
  printf("checksum = %d\n",packet.checksum);
}


int main() {
}
