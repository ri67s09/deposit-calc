
	if (sum>=10000 && days<365) {
	printf("Данные верны"); 
		if (sum<10000) {
			if (days<=30) {
				p=sum*0.1;
				d=sum-p;
			} else { 
				if (days>30 && days <=120) {
					p=sum*0.02;
					d=sum+p; 
				} else { 
					if (days>120 && days <=240) { 
						p=sum*0.06;
						d=sum+p;
					} else { 
							p=sum*0.12;
							d=sum+p;
					}		
				}
			}
		} else {
			if (days<=31) { 
				p=sum*0.1;
				d=sum-p;
			} else {
				if (days>30 && days<=120) {
					 p=sum*0.03;
					 d=sum+p;
				} else {	 
					if (days>120 && days<=240) {
						p=sum*0.08;
						d=sum+p;
					} else {
						if (days>240 && days<=365)
							p=sum*0.15;
					}
				}
			}
		}
printf("Сумма вклада на момент окончания срока: %d", d);