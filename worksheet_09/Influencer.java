
public class Influencer extends SocialMediaUser{
    public String[] sponsorshipDeals ;

    Influencer(String username,int followercount ,String[] sponsorshipDeals) {
        super(username, followercount);
        this.sponsorshipDeals = sponsorshipDeals;
    }
        public void postContent(String content) {
            System.out.println("User: @" + username);
            System.out.println("Followers: " + followercount);
            System.out.println(
                    "Content Posted: " + content + " #Sponsored by " + sponsorshipDeals[0]
            );
        }

    public static void main(String[] args) {
        String[] sponsors = {"TechCorp"};

        Influencer influencer = new Influencer("TechGuru", 500000, sponsors);

        influencer.postContent("Reviewing the new X-Phone!");
    }
}


