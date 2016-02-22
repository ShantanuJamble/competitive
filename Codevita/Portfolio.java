/**
 * Created by Tushar on 8/7/2015.
 */
import java.io.*;
import java.util.*;
public class Portfolio {
    public static void main(String[] args) throws Exception{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        LinkedHashMap<String,int[]>stock=new LinkedHashMap<String, int[]>();
        String []ip;
        for(int i=0;i<5;i++)
        {
            ip=br.readLine().trim().split(" ");
            String name=ip[0];
            int[]arr=new int[22];
            for(int j=0;j<22;j++){
                arr[j]=Integer.parseInt(ip[j+1]);
            }
            stock.put(name,arr);
        }
        /*for(String name:stock.keySet()){
            System.out.print("\n"+name+" ");
            int []arr=stock.get(name);
            for(int i=0;i<arr.length;i++){
                System.out.print(" "+arr[i]);
            }

        }*/
        LinkedHashMap<String,int[]>cost=new LinkedHashMap<String, int[]>();
        int[]tmp=new int[2];
        tmp[0]=tmp[1]=0;
        int[]tmp1=new int[2];
        tmp1[0]=tmp1[1]=0;
        int[]tmp2=new int[2];
        tmp2[0]=tmp2[1]=0;
        int[]tmp3=new int[2];
        tmp3[0]=tmp3[1]=0;
        int[]tmp4=new int[2];
        tmp4[0]=tmp4[1]=0;
        int s=0;
        for(String name:stock.keySet()){
            if(s==0)
                cost.put(name,tmp);
            if(s==1)
                cost.put(name,tmp1);
            if(s==2)
                cost.put(name,tmp2);
            if(s==3)
                cost.put(name,tmp3);
            if(s==4)
                cost.put(name,tmp4);
            s++;
        }


        String []input;
        int profit,loss;
        profit=loss=0;
        /*for(String nm:cost.keySet()){
            int[]array=cost.get(nm);
            System.out.println(" "+nm);
            for(int k=0;k<array.length;k++)
                System.out.print(" "+array[k]);
        }*/

        while(true)
        {
            input=br.readLine().trim().split(" ");
            if(input[0].equalsIgnoreCase("-1"))
                break;
            int date,qty;
            String buy,com;
            date=Integer.parseInt(input[0]);
            buy=input[1];
            com=input[2];
            qty=Integer.parseInt(input[3]);
            if(date>=1&&date<=5){
                if(buy.equalsIgnoreCase("B")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=qty+costarr[1];
                    int price=((costarr[0]*costarr[1])+(qty*stockarr[date-1]))/totalstock;
                    costarr[0]=price;
                    costarr[1]=totalstock;
                   // cost.remove(com);
                    //System.out.print(cost.get(com));
                    for(String name:stock.keySet()){
                         if(com.equals(name))
                        cost.put(name,costarr);
                    }


                    //System.out.println("in -1 com"+com+"price"+price+"stck"+totalstock);
                    /*for(String nm:cost.keySet()){
                        int[]array=cost.get(nm);
                        System.out.println(" "+nm);
                        for(int k=0;k<array.length;k++)
                            System.out.print(" "+array[k]);
                    }*/
                }
                if(buy.equalsIgnoreCase("S")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=costarr[1]-qty;
                    int price=costarr[0];
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                    if(price<stockarr[date-1])
                        profit+=(stockarr[date-1]-price)*qty;
                    else
                        loss+=(price-stockarr[date-1])*qty;
                }

            }
            if(date>=8&&date<=12){
                if(buy.equalsIgnoreCase("B")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=qty+costarr[1];
                    int price=((costarr[0]*costarr[1])+(qty*stockarr[date-3]))/totalstock;
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                    //System.out.println("in -3 com"+com+"price"+price+"stck"+totalstock);
                }
                if(buy.equalsIgnoreCase("S")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=costarr[1]-qty;
                    int price=costarr[0];
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                    if(price<stockarr[date-3])
                        profit+=(stockarr[date-3]-price)*qty;
                    else
                        loss+=(price-stockarr[date-3])*qty;
                }

            }
            if(date>=15&&date<=19){
                if(buy.equalsIgnoreCase("B")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=qty+costarr[1];
                    int price=((costarr[0]*costarr[1])+(qty*stockarr[date-5]))/totalstock;
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                    //System.out.println("in -5 com"+com+"price"+price+"stck"+totalstock);
                }
                if(buy.equalsIgnoreCase("S")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=costarr[1]-qty;
                    int price=costarr[0];
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                    if(price<stockarr[date-5])
                        profit+=(stockarr[date-5]-price)*qty;
                    else
                        loss+=(price-stockarr[date-5])*qty;
                }

            }
            if(date>=22&&date<=26){
                if(buy.equalsIgnoreCase("B")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=qty+costarr[1];
                    int price=((costarr[0]*costarr[1])+(qty*stockarr[date-7]))/totalstock;
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                    //System.out.println("in -7 com"+com+"price"+price+"stck"+totalstock);
                }
                if(buy.equalsIgnoreCase("S")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=costarr[1]-qty;
                    int price=costarr[0];
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                    if(price<stockarr[date-7])
                        profit+=(stockarr[date-7]-price)*qty;
                    else
                        loss+=(price-stockarr[date-7])*qty;
                }

            }
            if(date>=29&&date<=30){
                if(buy.equalsIgnoreCase("B")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=qty+costarr[1];
                    int price=((costarr[0]*costarr[1])+(qty*stockarr[date-9]))/totalstock;
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                   // System.out.println("in -9 com"+com+"price"+price+"stck"+totalstock);
                }
                if(buy.equalsIgnoreCase("S")){
                    int[]stockarr=stock.get(com);
                    int[]costarr=cost.get(com);
                    int totalstock=costarr[1]-qty;
                    int price=costarr[0];
                    costarr[0]=price;
                    costarr[1]=totalstock;
                    cost.put(com,costarr);
                    if(price<stockarr[date-9])
                        profit+=(stockarr[date-9]-price)*qty;
                    else
                        loss+=(price-stockarr[date-9])*qty;
                }

            }

        }
        for(String name:cost.keySet()){
            int[]costarr=cost.get(name);
            if(costarr[1]>0)
            {
                System.out.println(name+" "+costarr[1]);
            }

        }
        if(profit>0)
            System.out.println("Profit = " + profit);
        if(loss>0)
            System.out.println("Loss = "+loss);
    }
}
