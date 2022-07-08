import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Clock o = new Clock();
        System.out.println("CLOCK.");
        System.out.print("Enter anything to start the stopwatch: ");
        String d = sc.nextLine();
        o.start();
        System.out.print("Enter anything to get time eloped: ");
        d = sc.nextLine();
        int c = o.getCurrentTime();
        System.out.println("Time Eloped: "+(c/3600)+" hrs "+((c-(c/3600 * 3600)/60))+" mins "+(c - (c/60 * 60))+" secs");

    }
}
interface Stopwatch
{
    void start();
    int stop();
    Date resetTime();
    int getCurrentTime();
}
interface AlarmClock
{
    void setAlarm();
    int getAlarm();
    Date[] getAllAlarms();
    Date getCurrentTime();
}
class Clock implements AlarmClock, Stopwatch
{
    int n = 5;
    Date o1;
    Date[] alarm = new Date[5];
    static int i;
    public void start()
    {
        o1 = new Date();
    }
    public int stop()
    {
        Date o = new Date();
        return (o.getTime() - o1.getTime())/1000;
    }
    public void resetTime()
    {
        o1 = new Date();
    }
    public int getCurrentTime()
    {
        Date o = new Date();
        return (o.getTime() - o1.getTime())/1000;
    }
    public void setAlarm()
    {
        alarm[i] = new Date();
        i++;
    }
    int getAlarm()
    {
        Arrays.sort(alarm);
        Date o = new Date();
        return (alarm[0].getTime() - o.getTime())/1000;
    }
    Date[] getAllAlarms()
    {
        Arrays.sort(alarm);
        return alarm;
    }
    Date getCurrentTime()
    {
        Date o = new Date();
        return o;
    }
}
